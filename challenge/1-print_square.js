#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.exit(1);
}

const size = parseInt(process.argv[2], 10);

for (let i = 0 ; i < size ; i ++) {
    let string = "";
    for (let j = 0 ; j < size ; j ++) {
        string += "#";
    }
    console.log(string);
}
