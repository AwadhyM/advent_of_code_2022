My solutions for the advent of code 2022 problems. Each solution is likely the result
of different iterations.

Goals:
- Learn new concepts related to Data Structures & Algorithms (DSA)
- Experiment with different features of C++

# Build instructions

## Building all applications
```bash
cmake -S . -B __build -DFETCHCONTENT_QUIET=OFF -DCMAKE_EXPORT_COMPILE_COMMANDS=1
cmake --build __build
```

Where `-DCMAKE_EXPORT_COMPILE_COMMANDS=1` creates a compile_commands.json file

Each application executable can be found at `__build/app/app` where `app` is the name of the application.

## Building all unit tests
```bash
cmake -S . -B __unit_build -DFETCHCONTENT_QUIET=OFF
cmake --build __unit_build
```

## Running all unit tests
```bash
cmake --build __unit_build --target test
```
Note: The unit test cases must be re-built if a change is made before re-running them.

## Running test coverage
Ensure you configure the build with the added options as follows:

```bash
cmake -S . -B __unit_build -DFETCHCONTENT_QUIET=OFF -DENABLE_DEVELOPER_MODE=ON -DOPT_ENABLE_CLANG_TIDY=OFF -DOPT_ENABLE_COVERAGE=ON
```

You can then run:
```bash
cmake --build __unit_build
cmake --build __unit_build --target test
cmake --build __unit_build --target covreport
```
Note: The test coverage analysis can also be viewed by opening the generated `__unit_build/coverage.html` on a web browser. It might be necessary to delete
the file so it is generated again if the content is not quite what is expected
after removing a previously existing test case.

