#Different approaches that were explored:- 

I explored the following approaches to efficiently extract logs from a 1 TB log file:

##1. Naïve Approach (Reading Entire File in Memory)

Method: Load the entire file into memory and search for matching lines.
Issue: This approach is infeasible for a 1 TB file as it would exceed memory limits.
Line-by-Line Streaming (Efficient Approach - Chosen Solution)

##2. Line by line streaming (Efficient one)
Method: Read the file line by line and immediately write matching lines to the output file.
Benefits:
Memory Efficient – Reads one line at a time instead of loading the full file.
Performance – Does not require preprocessing or indexing.
Scalability – Works well for large files since only one line is stored in memory at a time.


#Why I chose this solution?

I chose the line-by-line streaming approach because:

1. It allows processing a 1 TB log file efficiently without memory overflow.
2. It scans the file in one pass, writing matched logs to an output file.
3. The implementation is simple, robust, and portable across platforms.


# Steps to run the solution:- 

1. *Navigate to the Project Directory*
   sh
   cd /path/to/tech-campus-recruitment-2025/src
   

2. *Download the Log File*
   sh
   wget "https://limewire.com/d/0c95044f-d489-4101-bf1a-ca48839eea86#cVKnm0pKXpN6pjsDwav4f5MNssotyy0C8Xvaor1bA5U" -O log_2024.zip
   unzip log_2024.zip
   

3. *Compile the C++ Program*
   sh
   g++ extract_log.cpp -o extract_log
   

4. *Run the Program*
   sh
   ./extract_log log_2024.log YYYY-MM-DD
   

5. *Verify Output*
   - The extracted log file should be named output_YYYY-MM-DD.txt and located in the src/ directory.
