README:

Use this program to covert .inc file to actual .so for zephyr llext  
inc file is the output file generated as a part of llext module compilation process

STEP1 (Compilation) :

    # gcc inc_to_bin.c -o <exe_name>

    Note: Make sure input.inc file is present in current directory
    rename your respective inc file to "input.inc"

STEP2 (Execution) :

    # <exe_name> <output_file.so>

    Note: After execution make sure you get below log
    INFO: <actual so file size> bytes written succucessfully
