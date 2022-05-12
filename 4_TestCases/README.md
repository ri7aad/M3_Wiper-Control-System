# High Level Test Plan


**Test ID**    | **Description**   |**Exp input**   |**Exp output**  |	**Actual output**|**STATUS**
 ------------|---------------|--------------|------------------|------------------|------------
|HL 01|	Check if the BUTTON is pressed	|Program execution	|Engine starts|LED ON(RED)|	PASS
|HL 02|	Check if the BUTTON is pressed	|Program execution	|WIPER starts	|LED ON(BLUE)|PASS
HL 03|	Check if the BUTTON is pressed |Program execution	|WIPER starts	|LED ON(GREEN)|	PASS
HL 04|	Check if the BUTTON is pressed	|Program execution	|WIPER starts	|LED ON(ORANGE)|PASS
HL 05|	Check if the BUTTON is pressed|	|Engine stops|	LED TURNED OFF	|PASS


# Low Level Test Plan
**Test ID**    | **Description**   |**Exp input**   |**Exp output**  |	**Actual output**|**STATUS**
 ------------|---------------|--------------|------------------|------------------|------------
|LL 01|	Check if the BUTTON is pressed again	|Program execution	|Engine starts|LED ON(RED)|	PASS
|LL 02|	Check if the BUTTON is pressed again	|Program execution	|WIPER starts and runs at slow speed	|LED ON(BLUE)|PASS
|LL 03|	Check if the BUTTON is pressed again  |Program execution	|WIPER starts and runs at medium speed	|LED ON(GREEN)|	PASS
|LL 04|	Check if the BUTTON is pressed again	|Program execution	|WIPER starts and runs at fast speed	|LED ON(ORANGE)|PASS
|LL 05|	Check if the BUTTON is pressed again|	|Engine stops|	LED TURNED OFF	|PAS
