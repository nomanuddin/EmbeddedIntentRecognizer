# EmbeddedIntentRecognizer
Simple command line intent recognition tool


#### Running app:
- Clone application from Github in visual studio
- build project
- Run application


#### Predefined use cases:
- What is the weather like today? (Intent: Get Weather)
- What is the weather like in Paris today? (Intent: Get Weather City)
- What is the weather like in New York today? (Intent: Get Weather City)
- Am I free at 13:00 PM tomorrow? (Intent: Check Calendar)
- Tell me an interesting fact. (Intent: Get Fact)

#### Code logic explanation:
- Step 1: String is compared for relevant intent
- Step 2: Respective class is instantiated, and the relative method is called
- Step 3: Required intent and info is displayed
- Step 4: exit keyword entered as question breaks the loop and application is closed

#### Future work:
- Regex/ Question parser implementation
- Adding calendar api
- Adding unit tests
- Using timeout in the main method loop logic
