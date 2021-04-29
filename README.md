#danehobrecht

Flashing Instructions (GNU/Linux):

Download and migrate the zip of this repository to: ~/qmk_firmware/keyboards/niu_mini/keymaps. 

Extract the folder and rename it to "danehobrecht"

Open the terminal and run:

    qmk flash -kb niu_mini -km danehobrecht

You should recieve this error:

>ERROR: Bootloader not found. Trying again in 5s

This is indicating that the board is waiting to be reset. Resetting can
be done with a previously assigned macro, or via the button located on the PCB.
This can be accessed through the bottomside of the case.

Note: Ensure RGB is toggled "on" prior to resetting. QMK will not recognize the bootloader otherwise.

If the flash is successful, you will recieve the following:

>Bootloader Version: 0x00 (0)
>Validating...
>26328 bytes used (91.82%)

Done!
