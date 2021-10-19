Feature: Dawki should query the running docker daemon

    - list all the docker containers present

  Scenario: Docker daemon is not running
    Given Dawki finds out that docker daemon is not working
    When Dawki tries to query the docker daemon
    Then Dawki marks the docker daemon url as non functional
