
	
RETARDO:
	MOVLW .255
	MOVWF D3
	MOVLW .116
	MOVWF D2
	MOVLW .10
	MOVWF D1
	DECFSZ D1
	GOTO $-1
	DECFSZ D2
	GOTO $-4
	DECFSZ D3
	GOTO $-9
	RETURN

RETARDO_500ms:
	MOVLW .100
	MOVWF D3
	MOVLW .50
	MOVWF D2
	MOVLW .5
	MOVWF D1
	DECFSZ D1
	GOTO $-1
	DECFSZ D2
	GOTO $-4
	DECFSZ D3
	GOTO $-9
	RETURN

