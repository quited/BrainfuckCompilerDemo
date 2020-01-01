# Brainfuck++ Specification

<table style="border: 1px solid black; margin: 2px 2px 2px 2px; width: 50%" cellspacing="0" cellpadding="4">
<tbody><tr>
<td style="width: 10%; text-align: center; background: #FFCC99">Storage
</td>
<td style="border-left: 1px solid black; width: 50%; text-align: center; background: #99CCFF">Source
</td>
<td style="border-left: 1px solid black; width: 40%; text-align: center; background: #CCFF99">Memory
</td></tr></tbody></table>

* The storage byte takes up the leftmost cell. Followed by the source code, then directly by the normal memory cells.
* if a loop brackets partner cannot be found before the `@` ignore that bracket.
* Data after the `@` is added into the data cells as cell initializer data. Otherwise as normal all cells starts with at zero. 
 
| operation | description |
| --------- | ----------- |
|`>`|Increment the data pointer (to point to the next cell to the right).|
|`<`|Decrement the data pointer (to point to the next cell to the left).|
|`+`|Increment (increase by one) the byte at the data pointer.|
|`-`|Decrement (decrease by one) the byte at the data pointer.|
|`.`|Output the byte at the data pointer.|
|`,`|Accept one byte of input, storing its value in the byte at the data pointer.|                                
|`[`|If the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching `]` command.
|`]`|If the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching `[` command.|
|`{`|Start of function definition. The function id will be stored to the byte which is pointed by the data pointer.|
|`}`|End of function definition.|
|`(`|Start to call the function whose id is the byte at the data pointer. `>`,`<`,`[]`,`()` can be performed inside `()`. The number of return values and the return values will be copied to the area started from the data pointer. (retc,retv...)|
|`)`|End of function call.|
|`^`|Inside `()`: Emit the byte at the data pointer as an argument. The arguments will be copied to the submemory of function (argc,argv...).<br> Inside `{}`: Emit the byte at the data pointer as a return value.|
|`@`|Ends the program, generally used as a separator between code and data.|
|`$`|Overwrites the byte in storage with the byte at the pointer.|
|`!`|Overwrites the byte at the pointer with the byte in storage.|
|`?`|Sets the current point of execution to the location of the pointer.|
|`0` to `F`|Fast Cell Initializer Commands: 0 1 2 3 4 5 6 7 8 9 A B C D E F <br><br> Turns values 0 to F to their hex equivalents and initializes the cell to be the value of these multiplied by 16 or 0x10. So F would change the value of the cell to (15\*16) 240 or 0xF0, where as 5 changes it to (5\*16) 80 or 0x50.|
|`_`|Inserts a new cell before the current pointer, shifting all following cells to the right.|
|`;`|Removes the cell at the current pointer, shifting all following cells to the left.|
|`*`|Multiplies the byte at the pointer with the byte in storage, storing its result in the byte at the pointer.|
|`/`|Divides the byte at the pointer with the byte in storage, storing its result in the byte at the pointer.|
|`=`|Adds the byte at the pointer with the byte in storage, storing its result in the byte at the pointer.|
|`_`|Subtracts the byte at the pointer with the byte in storage, storing its result in the byte at the pointer.|
|`%`|Preforms a Modulo operation on the byte at the pointer and the byte in storage, storing its result in the byte at the pointer.
|`X`|This command moves the pointer to the cell containing currently executing command. (That is this command)|
|`x`|This command returns the pointer it was pointing to prior to the last call to X, if X has not been called, it resets it to its initial position (cell 0). If x has been called to return from X, it returns it to the cell it would have returned to.
|`M`|Marks the current cell as the cell to use as the 'storage' cell.|
|`m`|Resets the storage cell to the initial storage cell.|
|`L`|Locks a cell and prevents it from being changed. Any attempt to change it silently fails. (This includes deleting it)|
|`l`|Unlocks a previously locked cell and allows it to be edited again. Calling this on a already unlocked cell does nothing.|
|`:`|Moves the pointer forward or back by the signed number at the current cell. So a cell value of 5, moves the pointer ahead 5 places, where as 251 (signed -5) would move the pointer back 5 places. This is useful for simple variable determining pointer movement.|
|`#`|All following characters between this and the next `#` are ignored (unless they are in the data area). Comments can be changed to become uncommented due to the nature of self modifying code.|