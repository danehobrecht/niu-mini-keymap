#danehobrecht

Flashing Instructions:

Download and migrate the "danehobrecht" folder listed in this repository to: ~/qmk_firmware/keyboards/niu_mini/keymaps

Open terminal and run:

>qmk flash -kb niu_mini -km danehobrecht

You will recieve an error:

>"ERROR: Bootloader not found. Trying again in 5s"

This is indicating that the board is waiting to be reset.
*Note: Ensure RGB is toggled "on" prior to resetting. Resetting can
be done with the on-board macro, or via the button located on the PCB.
This can be accessed through the bottomside of the case. 
You should recieve the following if the flash is successful:

>Bootloader Version: 0x00 (0)
>Validating...
>26424 bytes used (92.16%)
