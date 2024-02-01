,>,<                 # Read two numbers from input and store them in block #1 and block #2
[                     # Start the loop
  -                   # Decrement the value in block #2 by 1
  >                   # Move to block #3
  +                   # Increment the value in block #3 by 1 (counter)
  <                   # Move back to block #2
  [                   # Start another loop
    ->                # Decrement the value in block #2 by 1 and move to block #4
    <+>               # Increment the value in block #1 and move back to block #2
  ]                   # End the inner loop
  >-                  # Move to block #3 and decrement the counter
]                   # End the outer loop
<                   # Move to block #1
[->+<]              # Add the product of block #1 and block #3 to block #0
<                   # Move to block #0
[-]                 # Clear block #0
<                   # Move to block #1
.                   # Output the result (single-digit number)
