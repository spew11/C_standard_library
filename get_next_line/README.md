# GET_NEXT_LINE

char *  
get_next_line(int fd, int buffer_size); 
> This function includes static library [libspewc](https://github.com/spew11/spewc_library/tree/main/libspewc)

## DESCRIPTION
The get_next_line() function returns a line that includes the terminating \n character from the text file pointed by the file descripter.  
If the end of file is reached and does not end with a \n character, It returns the remained characters all  
and this function uses a buffer whose size is decided by the buffer_size, to read characters from the text file and store the remained characters after returning a line.
