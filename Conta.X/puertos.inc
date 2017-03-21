	list p=16f887

; CONFIG1
; __config 0xE3F4
 __CONFIG _CONFIG1, _FOSC_INTRC_NOCLKOUT & _WDTE_OFF & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_OFF & _FCMEN_OFF & _LVP_OFF
; CONFIG2
; __config 0xFFFF
 __CONFIG _CONFIG2, _BOR4V_BOR40V & _WRT_OFF
 


CONFIG_P:
        BSF     STATUS,RP0  
        BCF     STATUS,RP1  
        MOVLW   0XFF
        MOVWF   TRISA     
        CLRF    TRISB        
        MOVLW   B'00001111'
        MOVWF   TRISD       
        BSF     STATUS,RP1 
        CLRF    ANSEL       
        CLRF    ANSELH      
        BCF     STATUS,RP0  
        BCF     STATUS,RP1
        CLRF    PORTA
        CLRF    PORTB
        CLRF    PORTC
        
    RETURN



