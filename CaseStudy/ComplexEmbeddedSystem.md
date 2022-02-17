# Complex Embedded System

![atm](https://user-images.githubusercontent.com/81153072/154562096-39bce622-1e80-4412-b3e8-4b2a72930fd2.png)

## Input Devices
The input devices like card reader and keypad.

### Card Reader
The card reader is an input device that reads data from a card. The card reader is part of the identification of your particular account number and the magnetic strip on the backside of the ATM card is used for connection with the card reader. The card is swiped or pressed on the card reader which captures your account information i.e. the data from the card is passed on to the host processor (server). The host processor thus uses this data to get the information from the cardholders.

### Keypad
The card is recognized after the machine asks for further details like your identification number, withdrawal, and your balance inquiry Each card has a unique PIN so that there is little chance for some else to withdraw money from your account. There are separate laws to protect the PIN code while sending it to the host processor. The PIN is mostly sent in encrypted form. The keyboard contains 48 keys and is interfaced to the processor.

## Output Devices
The output devices are speaker, display screen, receipt printer, and cash depositor.

### Speaker
The speaker provides audio feedback when a particular key is pressed.

### Display Screen
The display screen displays the transaction information. Each step of withdrawal is shown by the display screen. A CRT screen or LCD screen is used by most of the ATMs.

### Receipt Printer
The receipt printer prints all the details recording your withdrawal, date and time, and the amount of withdrawal and also shows the balance of your account in the receipt.

### Cash Dispenser
The cash dispenser is the heart of the ATM. This is a central system of the ATM from where the required money is obtained. From this portion, the user can collect the money. The cash dispenser must count each bill and give the required amount. If in some cases the money is folded, it will be moved to another section and becomes the reject bit. All these actions are carried out by high precision sensors. A complete record of each transaction is kept by the ATM with the help of an RTC device.

