Jenkinsfile (Declarative Pipeline)
/* Requires the Docker Pipeline plugin */
pipeline {
    agent { docker { image 'python:3.12.1-alpine3.19' } }
    stages {
        stage('build') {
            steps {
                sh 'echo "Hello World"'
                sh 'python --version'
                ls -lah
            }
        }
    }
}
