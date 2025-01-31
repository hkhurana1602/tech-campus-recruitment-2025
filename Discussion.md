# Solutions Considered

## Approach 1: Using C++ with Line-by-Line Parsing
One possible solution was to use C++ to read the log file line by line, check for specific log levels or keywords, and extract relevant information. This method involves manually handling string operations, which can be inefficient and complex.

## Approach 2: Using C++ with Date-Based Filtering (Final Choice)
The chosen solution involves filtering log entries based on a given date. The program reads log_2024.log, extracts lines starting with the specified date, and saves them in a separate file. This ensures efficient log extraction without unnecessary processing.

# Final Solution Summary
The chosen solution involves:
- Downloading the log file before execution.
- Compiling extract_log.cpp using g++.
- Executing the compiled binary so it reads log_2024.log from src/.
- Filtering log entries based on a specified date.
- Storing the extracted logs in the output/ directory.

This approach was selected because it efficiently retrieves relevant log entries and is straightforward to implement.

# Steps to Run

1. *Navigate to the Project Directory*
   ```sh
   cd /path/to/tech-campus-recruitment-2025/src
   ```

2. *Download the Log File*
   ```sh
   wget "https://limewire.com/d/0c95044f-d489-4101-bf1a-ca48839eea86#cVKnm0pKXpN6pjsDwav4f5MNssotyy0C8Xvaor1bA5U" -O log_2024.zip
   unzip log_2024.zip
   ```

3. *Compile the C++ Program*
   ```sh
   g++ extract_log.cpp -o extract_log
   ```

4. *Run the Program*
   ```sh
   ./extract_log log_2024.log YYYY-MM-DD
   ```

5. *Verify Output*
   - The extracted log file should be named output_YYYY-MM-DD.txt and located in the src/ directory.
