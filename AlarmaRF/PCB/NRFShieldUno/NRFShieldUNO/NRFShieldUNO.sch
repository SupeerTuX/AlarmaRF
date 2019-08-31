EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Module:Arduino_UNO_R3 A?
U 1 1 5D6857F4
P 4500 3450
F 0 "A?" H 4500 4631 50  0000 C CNN
F 1 "Arduino_UNO_R3" H 4500 4540 50  0000 C CNN
F 2 "Module:Arduino_UNO_R3" H 4650 2400 50  0001 L CNN
F 3 "https://www.arduino.cc/en/Main/arduinoBoardUno" H 4300 4500 50  0001 C CNN
	1    4500 3450
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5D68978D
P 4700 2300
F 0 "#PWR?" H 4700 2150 50  0001 C CNN
F 1 "+5VA" H 4715 2473 50  0000 C CNN
F 2 "" H 4700 2300 50  0001 C CNN
F 3 "" H 4700 2300 50  0001 C CNN
	1    4700 2300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 2300 4700 2450
$Comp
L power:GND #PWR?
U 1 1 5D68A6B0
P 4550 4750
F 0 "#PWR?" H 4550 4500 50  0001 C CNN
F 1 "GND" H 4555 4577 50  0000 C CNN
F 2 "" H 4550 4750 50  0001 C CNN
F 3 "" H 4550 4750 50  0001 C CNN
	1    4550 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 4550 4500 4650
Wire Wire Line
	4500 4650 4550 4650
Wire Wire Line
	4550 4650 4550 4750
Wire Wire Line
	4550 4650 4600 4650
Wire Wire Line
	4600 4650 4600 4550
Connection ~ 4550 4650
Text GLabel 3850 3650 0    50   Input ~ 0
IRQ
Text GLabel 3850 3750 0    50   Input ~ 0
CSN
Text GLabel 3850 3850 0    50   Input ~ 0
CE
Text GLabel 3850 3950 0    50   Input ~ 0
MOSI
Text GLabel 3850 4050 0    50   Input ~ 0
MISO
Text GLabel 3850 4150 0    50   Input ~ 0
SCK
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5D690533
P 6300 2650
F 0 "J?" V 6465 2580 50  0000 C CNN
F 1 "Conn_01x08_Female" V 6374 2580 50  0000 C CNN
F 2 "" H 6300 2650 50  0001 C CNN
F 3 "~" H 6300 2650 50  0001 C CNN
	1    6300 2650
	0    -1   -1   0   
$EndComp
Text GLabel 6000 2950 3    50   Input ~ 0
CE
Text GLabel 6100 2950 3    50   Input ~ 0
CSN
Text GLabel 6200 2950 3    50   Input ~ 0
SCK
Text GLabel 6300 2950 3    50   Input ~ 0
MOSI
Text GLabel 6400 2950 3    50   Input ~ 0
MISO
Text GLabel 6500 2950 3    50   Input ~ 0
IRQ
$Comp
L power:GND #PWR?
U 1 1 5D692E2C
P 6600 3200
F 0 "#PWR?" H 6600 2950 50  0001 C CNN
F 1 "GND" H 6605 3027 50  0000 C CNN
F 2 "" H 6600 3200 50  0001 C CNN
F 3 "" H 6600 3200 50  0001 C CNN
	1    6600 3200
	1    0    0    -1  
$EndComp
$Comp
L power:+5VA #PWR?
U 1 1 5D693251
P 6800 3200
F 0 "#PWR?" H 6800 3050 50  0001 C CNN
F 1 "+5VA" H 6815 3373 50  0000 C CNN
F 2 "" H 6800 3200 50  0001 C CNN
F 3 "" H 6800 3200 50  0001 C CNN
	1    6800 3200
	-1   0    0    1   
$EndComp
Wire Wire Line
	6600 2850 6600 3200
Wire Wire Line
	6700 2850 6700 3100
Wire Wire Line
	6700 3100 6800 3100
Wire Wire Line
	6800 3100 6800 3200
Wire Wire Line
	6500 2850 6500 2950
Wire Wire Line
	6400 2950 6400 2850
Wire Wire Line
	6300 2850 6300 2950
Wire Wire Line
	6200 2950 6200 2850
Wire Wire Line
	6100 2850 6100 2950
Wire Wire Line
	6000 2950 6000 2850
Wire Wire Line
	3850 3650 4000 3650
Wire Wire Line
	3850 3750 4000 3750
Wire Wire Line
	3850 3850 4000 3850
Wire Wire Line
	3850 3950 4000 3950
Wire Wire Line
	3850 4050 4000 4050
Wire Wire Line
	3850 4150 4000 4150
$EndSCHEMATC
