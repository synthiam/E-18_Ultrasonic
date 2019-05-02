#include <main.h>

void main() {

  delay_ms(250);

  output_drive(PORT_LED);
  output_low(PORT_LED);
  
  output_drive(PORT_TRIGGER);
  output_low(PORT_TRIGGER);

  output_float(PORT_ECHO);  
  
  while(true) {
    
    unsigned int16 cnt  = 0;
    unsigned int16 cnt2 = 0;
        
    // wait for 10 us trigger from client
    // Universal is INPUT
    // ---------------------------------------------------------------------------------------------------------------
    
    output_float(PORT_UNIVERSAL);
    
    // wait for client signal to go high
    while (!input(PORT_UNIVERSAL));
    output_high(PORT_TRIGGER);

    // wait for client signal to go low
    while (input(PORT_UNIVERSAL));
    output_low(PORT_TRIGGER);

    // Wait for the sensor to go high of returned value
    // Universal is OUTPUT
    // ---------------------------------------------------------------------------------------------------------------     

    output_high(PORT_LED);
   
    output_drive(PORT_UNIVERSAL);
    output_low(PORT_UNIVERSAL);

    delay_us(15);
    
    // loop until timeout for sensor to go high, which is the start the echo response
    do {

      // if the echo pin hasn't gone high in a certain amount of time, exit with a distance of 0
      if (cnt2 == HC_TIMEOUT_HIGH)
        break;
          
      cnt2++;
    } while (!input(PORT_ECHO));

    output_high(PORT_UNIVERSAL);

    // Wait for the sensor to go low which reflects the distance
    // ---------------------------------------------------------------------------------------------------------------     
    
    if (cnt2 == HC_TIMEOUT_HIGH) {
    
      // the sensor did not respond to our ping so we go high for an arbitrary amount of time to return a long distance
      delay_ms(1);
    } else {

      // the sensor responded to our ping so not let's wait until it goes low which reflects the distance or timeout
      do {
    
        // if the echo pin hasn't gone high in a certain amount of time, exit with a fake distance
        if (cnt == HC_TIMEOUT_LOW)
          break;
            
        cnt++;
      } while (input(PORT_ECHO));
    }
    
    output_low(PORT_UNIVERSAL);
    output_low(PORT_LED);    
  }
}
