# Brainfuck++ Specification

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
|`\(`|Start to call the function whose id is the byte at the data pointer.`>`can be performed inside `()`, and the number of return values and the return values will be copied to the area started from the data pointer. (retc,retv...)|
|`\)`|End of function call.|
|`^`|Inside `()`: Emit the byte at the data pointer as a argument. The arguments will be copied to the submemory of function (argc,argv...).<br> Inside `{}`: Emit the byte at the data pointer as a return value.|