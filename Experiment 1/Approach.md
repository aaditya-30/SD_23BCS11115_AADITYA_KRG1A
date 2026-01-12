Approach:
    1. Functional Reqirements
    2. Non Functional Requirements
    3. Api designs
    4. DB Schema Desigh
    5. HLD
    6. LLD


Base Diagram+STATS (Quantify the approach)
Tools: POSTman, Draw.io(Free), Excali, LucidCharts


1. FUNCTIONAL REQUIREMENTS:
    A. Given a long url -> short url
        PREMIUM USERS:
            1. Custom Url
            2. Expiry date
    B. Given a short url -> Redirect to the long url


2. NON FUNCTIONAL REQUIREMENT:
    A. Scenarios
        100M users are daily active users (DAU) -> Scrolling =>Read
        1M are actually url shortening => Write

    B. Availability and Consistency:TRADEOFF

    C. RESPONSE TIME/ LATENCY -> 20ms => On creation and redirection
    
    D. Scalability : V or H

    E. UNIQUENESS

3. API DESIGNS:
    A. Protocols:
        HTTPS
    B. PreDefined Functions:
        I. GET-retrieve
        II. PUT/PATCH-update
        III. POST-insert
        IV. DELETE- remove

    -----API NEED-----
    1. POST API CALL
        APP.ROUTE(/SHORTEN)
        LOCAL HOST: HTTPS://127.0.0.1/SHORTEN
        HTTPS REQ:
        {
            URL: "Long Url",
            Custom_URL: ?,
            EXPIRY_DATE: ?
        }

        HTTPS RES:
        {
            SHORT_URL: "SHORT URL",
            SHORT_CODE: "ABC 123"
        }
    
    2. GET API CALL
        APP.ROUTE(/SHORT_URL)
        IN DB, 
        if long url exists corrosponds to short url - landing page
        else: 404 error.

4. DATABASE SCHEMA DESIGN
    TABLES REQUIRED?
    T1 - USER META DATA STORAGE
    T2 - URL_MAPPING(LONG_URL, SHORT_URL, CUSTOM URL, EXPIRY_DATE)

5. HLD
    REFER TO THE DIAGRAM: EXPERIMENT 01.DRAW.IO
    
