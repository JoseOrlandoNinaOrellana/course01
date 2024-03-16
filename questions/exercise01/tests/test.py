#! /usr/bin/python3

import cgrader


class QuestionGrader(cgrader.CPPGrader):
    def tests(self):
        self.test_compile_file(
            "start.cpp",
            "main",
            add_c_file="/grade/tests/main.cpp",
            flags="-lgtest -lgtest_main -pthread",
            pkg_config_flags="check",
        )
        self.run_check_suite("./main", use_iteration=True)


g = QuestionGrader()
g.start()
