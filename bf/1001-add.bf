,[>,]       # Read the first digit from stdin and store it in the first memory cell
>,          # Move to the next memory cell
[           # Start the loop
    [->+<]  # Add the second digit to the current memory cell
    -       # Decrement the first digit
    >       # Move to the next memory cell
]           # End the loop
<           # Move back to the first memory cell
.           # Output the result (the added value)
