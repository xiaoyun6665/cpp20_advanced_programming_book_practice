export module Hr;

export namespace Hr{
    enum class Title{
        ENGINEER,
        SENIOR_ENGINEER,
        MANAGER
    };

    struct Employee {
        char firstname;
        char lastname;
        int employeeNumber;
        int salary;
        Title title;
    };


};