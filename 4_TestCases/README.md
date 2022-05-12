# High Level Test Plan


**Test ID**    | **Description**   |**Exp input**   |**Exp output**  |	**Actual output**|**STATUS**
 ------------|---------------|--------------|------------------|------------------|------------
|HL 01|	Check if the BUTTON is pressed	|Program execution	|Engine starts|RED LED ON|	PASS
|HL 02|	Check if the BUTTON is pressed	|Program execution	|WIPER starts	|BLUE LED ON|PASS
HL 03|	Check if the BUTTON is pressed |Program execution	|WIPER starts	|GREEN LED ON|	PASS
HL 04|	Check if the BUTTON is pressed	|Program execution	|WIPER starts	|ORANGE LED ON|PASS
HL 05|	Check if the BUTTON is pressed|	|Engine stops|	LED TURNED OFF	|PASS


# Low Level Test Plan
**Test ID**    | **Description**   |**Exp input**   |**Exp output**  |	**Actual output**|**STATUS**
 ------------|---------------|--------------|------------------|------------------|------------
|LL 01|	Check if the BUTTON is pressed again	|Program execution	|Engine starts|RED LED ON|	PASS
|LL 02|	Check if the BUTTON is pressed again	|Program execution	|WIPER starts and runs at slow speed	|BLUE LED ON|PASS
|LL 03|	Check if the BUTTON is pressed again  |Program execution	|WIPER starts and runs at medium speed	|GREEN LED ON|	PASS
|LL 04|	Check if the BUTTON is pressed again	|Program execution	|WIPER starts and runs at fast speed	|ORANGE LED ON|PASS
|LL 05|	Check if the BUTTON is pressed again|	|Engine stops|	LED TURNED OFF	|PASS
