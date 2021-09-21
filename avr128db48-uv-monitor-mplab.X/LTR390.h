#ifndef LTR390_H
#define	LTR390_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "LTR390_registers.h"
    
#include <stdint.h>
#include <stdbool.h>
    
//If defined, a SW Reset command is sent to LTR390 on Init
//Redundant due to device power cycling, however.
//#define SW_RESET
    
    //Reset and Configure LTR-390 Sensor
    bool initLTR390(void);
    
    //Set a register in the LTR390 
    bool LTR390_setRegister(LTR390_REGISTER reg, uint8_t config);
    
    //Get a register in the LTR390
    uint8_t LTR390_getRegister(LTR390_REGISTER reg);
        
    //Returns true if the P/N Field matches the Datasheet
    bool LTR390_isConnected(void);
    
#ifdef	__cplusplus
}
#endif

#endif	/* LTR390_H */
