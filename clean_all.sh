#!/bin/bash

# Function to traverse directories and run make fclean
clean_all() {
    for dir in */ ; do
        if [ -d "$dir" ]; then
            echo "Entering directory: $dir"
			cd $dir
			for dir2 in */ ; do
        		if [ -d "$dir2" ]; then
					echo "Entering directory: $dir2"
					cd "$dir2"
					if [ -f "Makefile" ]; then
						echo "Running make fclean in $dir2"
						make fclean
					fi
					echo "Leaving directory: $dir2"
					cd ..
				fi
			done
			echo "Leaving directory: $dir"
            cd ..
        fi
    done
}

# Start the cleaning process
clean_all