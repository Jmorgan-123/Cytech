<!DOCTYPE html>
<html lang="en">


<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Software Engineer Portfolio</title>
  <link href="https://cdn.jsdelivr.net/npm/tailwindcss@2.2.19/dist/tailwind.min.css" rel="stylesheet">
  <link rel="stylesheet" type="text/css" href="style.css">
  <!-- Other meta tags, title, and stylesheets can go here -->



  <style>
    <body class="bg-gray-200"><div id="root"></div><script type="module" src="/src/script.jsx"></script><nav class="bg-blue-900 text-white py-4"><div class="container mx-auto flex justify-between items-center"><a href="#" class="text-2xl font-bold">Jzs Gamer Portfolio</a><ul class="flex space-x-4"><li><a href="#about" class="hover:text-blue-300">About</a></li><li><a href="#projects" class="hover:text-blue-300">Projects</a></li><li><a href="#skills" class="hover:text-blue-300">Skills</a></li><li><a href="#education" class="hover:text-blue-300">Education</a></li><li><a href="#work-experience" class="hover:text-blue-300">Work Experience</a></li><li><a href="#certifications" class="hover:text-blue-300">Certifications</a></li><li><a href="#volunteer" class="hover:text-blue-300">Volunteer</a></li><li><a href="#awards" class="hover:text-blue-300">Awards</a></li><li><a href="#contact" class="hover:text-blue-300">Contact</a></li></ul></div></nav></body>

    /* General Styles */
    body {
      font-family: 'Open Sans', sans-serif;
      background-color: #f7f7f7;
      margin: 0;
      padding: 0;
    }

    .container {
      max-width: 1000px;
      margin: 0 auto;
      padding: 20px;
    }

    /* Header Section */
    #header {
      padding: 40px 0;
      text-align: center;
      background-color: #f0f0f0;
    }

    #header h1 {
      font-size: 2.5rem;
      margin-bottom: 15px;
    }

    #header p {
      font-size: 1.1rem;
      color: #777;
    }

    /* Section Styles */
    section {
      margin-bottom: 50px;
    }

    .section-title {
      font-size: 2rem;
      font-weight: bold;
      color: #333;
      margin-bottom: 20px;
      text-decoration: underline;
    }

    /* Project Card Styles */
    .project-card {
      background-color: #fff;
      border-radius: 8px;
      box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
      padding: 20px;
      margin-bottom: 20px;
      transition: transform 0.3s ease-in-out;
    }

    .project-card:hover {
      transform: translateY(-5px);
    }

    .project-title {
      font-size: 1.3rem;
      font-weight: bold;
      color: #333;
      margin-bottom: 10px;
    }

    .project-description {
      color: #555;
      margin-bottom: 15px;
    }

    .project-link {
      display: inline-block;
      background-color: #2196f3;
      color: #fff;
      padding: 8px 16px;
      border-radius: 5px;
      text-decoration: none;
      transition: background-color 0.3s ease-in-out;
    }

    .project-link:hover {
      background-color: #1769aa;
    }

    /* Testimonials Section */
    #testimonials {
      background-color: #f5f5f5;
      padding: 40px 0;
    }

    .testimonial {
      background-color: #fff;
      border-radius: 8px;
      padding: 20px;
      margin-bottom: 20px;
      box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
    }

    .testimonial p {
      color: #777;
      line-height: 1.5;
    }

    /* Contact Section */
    #contact {
      padding: 40px 0;
      background-color: #f0f0f0;
    }

    #contact form {
      max-width: 600px;
      margin: 0 auto;
    }

    #contact input,
    #contact textarea {
      width: 100%;
      padding: 10px;
      border: 1px solid #ccc;
      border-radius: 4px;
      margin-bottom: 15px;
      font-size: 1rem;
    }

    #contact textarea {
      height: 150px;
    }

    #contact button {
      background-color: #2196f3;
      color: #fff;
      padding: 10px 20px;
      border: none;
      border-radius: 4px;
      cursor: pointer;
      transition: background-color 0.3s ease-in-out;
    }

    #contact button:hover {
      background-color: #1769aa;
    }

    /* Footer Section */
    footer {
      padding: 20px 0;
      background-color: #333;
  </style>
</head>

<body>
  <div class="container">
    <section id="header" class="py-8">
      <div class="text-center">
        <h1 class="text-4xl font-bold text-blue-900">Eng. Joab Mugane Portfolio</h1>
        <p class="text-lg text-gray-700">Showcasing design and coding abilities</p>
      </div>
    </section>
    <!-- About Section -->
    <section id="about" class="py-12">
      <div class="section-title">About Me</div>
      <p class="text-lg text-gray-700">I am a software engineer with one year of experience in Java, Python, and C#
        development. I have worked on various projects, both individually and as part of a team. My portfolio
        showcases
        my skills and projects completed during this course.</p>
    </section>

    <!-- Skills Section -->
    <section id="skills" class="py-12">
      <div class="section-title">Skills</div>
      <ul class="list-disc ml-8">
        <li>Java Development</li>
        <li>Python Programming</li>
        <li>C# Development</li>
        <li>Web Development (HTML, CSS, JavaScript)</li>
        <li>Database Management (SQL, NoSQL)</li>
        <li>Version Control Systems (Git)</li>
        <li>Responsive Web Design</li>
      </ul>
    </section>

    <!-- Projects Section -->
    <section id="projects" class="py-12">
      <div class="section-title">Portfolio Projects</div>

      <!-- Project 1: Java Development -->
      <div class="project-card">
        <h2 class="project-title">Responsive admin panel</h2>
        <p class="project-description">Fully responsive design optimized for desktop, tablet and mobile devices.</p>
        <a href="https://react-admin-panel-rouge.vercel.app" class="project-link">View Project</a>
        <a href="https://github.com/belam123/responsive-admin-panel" class="project link">Github Repository</a>
      </div>
    </section>
    <!-- Education Section -->
    <section id="education" class="py-12">
      <div class="section-title">Education</div>
      <div class="mb-4">
        <h3 class="text-lg font-bold">Currently majoring on Bachelor of Science in Information Systems Technology
        </h3>
        <p class="text-gray-700">United States International University, Graduating in 2027</p>
      </div>
      <div class="mb-4">
        <h3 class="text-lg font-bold">Certificate of Python crash course</h3>
        <p class="text-gray-700">Strathmore University Institute of Mathematical Science as a short course,
          Graduated
          last year on February before my May Intake</p>
      </div>
    </section>




    <!-- Projects Section -->
    <section id="projects" class="container mx-auto my-8">
      <h2 class="text-3xl font-bold mb-4">Projects</h2>
      <!-- Projects Section -->
      <section id="projects" class="py-12">
        <div class="section-title">Projects</div>

        <!-- Challenges Faced Working Alone -->
        <div class="mb-4">
          <h3 class="text-lg font-bold">Challenges Faced Working Alone</h3>
          <ul class="list-disc list-inside text-gray-700">
            <li>Managing multiple tasks simultaneously while maintaining quality.</li>
            <li>Making critical design and technical decisions independently.</li>
            <li>Meeting project deadlines and milestones without team support.</li>
            <li>Handling complex coding issues and debugging code without peer review.</li>
          </ul>
        </div>

        <!-- Experience of Working with Someone -->
        <div class="mb-4">
          <h3 class="text-lg font-bold">Experience of Working with Someone</h3>
          <p class="text-gray-700">I had the opportunity to collaborate with one of my closest friends,Bellam, some of my intellects colleagues like Vincent and Derrick, not to forget my professor Mr. Edward whom through his teaching also assisted alot, on a short-term project. This collaboration brought the following benefits:</p>
          <ul class="list-disc list-inside text-gray-700">
            <li>Sharing workload and dividing tasks based on expertise.</li>
            <li>Providing mutual support and feedback, leading to improved code quality.</li>
            <li>Enhancing creativity and problem-solving through brainstorming and discussions.</li>
            <li>Learning from each other's strengths and areas for improvement.</li>
          </ul>
        </div>
      </section>

      <!-- School Grade Program -->
      <div class="border p-4 mb-4">
        <h3 class="text-xl font-bold mb-2">School Grade Program</h3>
        <div class="border p-4 mb-4">
          <p>
            This Python program calculates the average marks and assigns a grade based on the USIU grading system.
          </p>
          <h2>USIU Grading System</h2>
          <ul>
            <li>90 - 100: A</li>
            <li>70 - 89: B</li>
            <li>65 - 69: C</li>
            <li>50 - 64: D</li>
            <li>0 - 49: F</li>
          </ul>
          <h2>Functionalities</h2>
          <ul>
            <li>Calculates grade based on average marks.</li>
            <li>Handles invalid marks inputs.</li>
            <li>Allows termination of the program.</li>
          </ul>
          <h2>Usage</h2>
          <p>
            The program prompts the user to enter marks for subjects, calculates the average, determines the grade,
            and
            offers the option to terminate.
          </p>
          <h2>Sample Output</h2>
          <p>
            Average marks: 75.50<br>
            Grade: B
          </p>
        </div>
        <script>
                // JavaScript can be added here for additional interactivity or functionality
        </script>
        <button onclick="window.location.href='https://ideone.com/2dDODm'"
          class="mt-2 bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-700">View Code</button>
      </div>

      <!-- Login Interface -->
      <div class="border p-4 mb-4">
        <h3 class="text-xl font-bold mb-2">Login Interface</h3>
        <p>A simple login interface implemented using HTML, CSS, and JavaScript.</p>
        <p>
          This Flask application provides a secure login interface with user registration, email verification,
          password
          hashing, OTP (One-Time Password) verification, and account deactivation features.
        </p>
        <h2>Features</h2>
        <ul>
          <li>User Registration: Users can register by providing a valid email and password.</li>
          <li>Email Verification: Accounts require email verification to activate.</li>
          <li>Password Hashing: Passwords are securely hashed before storage using Flask-Bcrypt.</li>
          <li>OTP Verification: Optional OTP verification for added security.</li>
          <li>Account Deactivation: Users can deactivate their accounts.</li>
        </ul>
        <h2>Technologies Used</h2>
        <ul>
          <li>Flask: Web framework for Python.</li>
          <li>Flask-WTF: Flask extension for handling web forms.</li>
          <li>Flask-Bcrypt: Flask extension for password hashing.</li>
          <li>Flask-Login: Flask extension for user authentication.</li>
          <li>Flask-SQLAlchemy: Flask extension for database management.</li>
          <li>PyOTP: Library for generating and verifying OTPs.</li>
        </ul>
        <a href="https://redesigned-yodel-7v7prv6qggx92p4jg.github.dev/ class=" project-link">View Project</a>
        <a href="https://www.programiz.com/python-programming/online-compiler/#google_vignette/ class=" project
          link">Github Repository</a>
      </div>
      <script>
                // Additional JavaScript can be added here for interactivity or functionality
      </script>
      <button onclick="window.location.href='https://ideone.com/naW00N'"
        class="mt-2 bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-700">View Code</button>



      <!-- Family prolog section-->
      <div class="border p-4 mb-4">
        <h3 class="text-xl font-bold mb-2">Family Prolog</h3>
        <p>
          This Prolog program represents a family tree with facts and rules defining relationships between family
          members.
          It utilizes Prolog's logic-based programming paradigm to query and infer family relationships.
        </p>
        <h2>Facts About the Family</h2>
        <ul>
          <li>John is the parent of Alice and Bob.</li>
          <li>Alice is the parent of Charlie.</li>
          <li>Bob is the parent of David.</li>
          <li>Charlie is the parent of Emma.</li>
          <li>David is the parent of Grace.</li>
          <li>Emma is the parent of Harry.</li>
          <li>Grace is the parent of Olivia.</li>
        </ul>
        <h2>Rules for Relationships</h2>
        <ul>
          <li>A person is a father if they are a parent and male.</li>
          <li>A person is a mother if they are a parent and female.</li>
          <li>Siblings share the same parent.</li>
          <li>A grandparent is a parent of a parent.</li>
          <li>An aunt or uncle is a sibling of a parent.</li>
          <li>A cousin shares a parent with another person.</li>
        </ul>
        <h2>Define Genders for People</h2>
        <ul>
          <li>John, Bob, Charlie, David, and Harry are male.</li>
          <li>Alice, Grace, Emma, and Olivia are female.</li>
        </ul>
        <h2>Sample Queries</h2>
        <ul>
          <li>Find the mother of Charlie.</li>
          <li>Find the siblings of Alice.</li>
          <li>Find the grandparent of Harry.</li>
          <li>Find the cousins of David.</li>
          <li>Find the aunt or uncle of Grace.</li>
        </ul>
      </div>
      <script>
                // <script>
                // JavaScript can be added here for additional interactivity or functionality
      </script>
      <button onclick="window.location.href='https://ideone.com/Cvuyo2'"
        class="mt-2 bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-700">View Code</button>
  </div>

  <h3 class="text-xl font-bold mb-2">School Grade Program</h3>
  <div class="border p-4 mb-4">
    <p>
      This code includes implementations of a shape area calculator in Python, Java, and C#. Each program calculates
      the area of a circle, rectangle, or triangle based on user input.
    </p>
    <h2>Python Implementation</h2>
    <p>
      The Python implementation uses functions to calculate the area of a circle, rectangle, or triangle, and a
      main function to handle user input and display the results.
    </p>
    <h2>Java Implementation</h2>
    <p>
      The Java implementation utilizes static methods to calculate the area of shapes and a Scanner object to
      receive user input. It then displays the calculated area.
    </p>
    <h2>C# Implementation</h2>
    <p>
      The C# implementation defines static methods to compute shape areas and uses Console.ReadLine() to get user
      input and display the results.
    </p>
  </div>
  <script>
                // Additional JavaScript can be added here for interactivity or functionality
  </script>
  <button onclick="window.location.href='https://ideone.com/77N66D'"
    class="mt-2 bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-700">View Code</button>
  </div>
  </section>



  <div class="border p-4 mb-4">
    <h3 class="text-xl font-bold mb-2">Area of shapes</h3>
    <p>
      This code calculates the area of various shapes such as circle, rectangle, and triangle based on user input.
    </p>
    <h2>Implemented Languages</h2>
    <ul>
      <li>Python: Uses the math module to calculate area formulas for circle, rectangle, and triangle.</li>
      <li>Java: Utilizes a Scanner for user input and methods to calculate areas for different shapes.</li>
      <li>C#: Implements methods for area calculations of circle, rectangle, and triangle.</li>
    </ul>
    <h2>Features</h2>
    <ul>
      <li>Dynamic selection of shapes based on user input.</li>
      <li>Accurate area calculations using mathematical formulas.</li>
      <li>Supports shapes with user-defined dimensions (radius, length, width, base, height).</li>
    </ul>
  </div>
  <script>
                // Additional JavaScript can be added here for interactivity or functionality
  </script>
  <button onclick="window.location.href='https://ideone.com/77N66D'"
    class="mt-2 bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-700">View Code</button>

  <!-- Awards and Achievements Section -->
  <section id="awards" class="py-12">
    <div class="section-title">Awards and Achievements</div>
    <ul class="list-disc ml-8">
      <li>Certificate of Participation for attending workshops or training programs related to programming, technology,
        or the field of study.
        and recognition for completing the short course in coding, web development, and software tools., 2023</li>
      <li>Merit Scholarship for academic excellence and achievements during that year and
        grant recipient for a research project or academic endeavor., Moringa School,same year but on the month of March
      </li>
      <li>Certificate of Achievement for demonstrating exceptional progress and dedication to learning. 2023</li>
      <li>Recognized for Outstanding Teamwork, Kenya Science School of Projects</li>
    </ul>
  </section>

  <!-- Testimonials Section -->
  <section id="testimonials" class="container mx-auto my-8">

    <section id="testimonials" class="py-12 bg-white">
      <div class="container mx-auto">
        <h2 class="text-3xl font-bold mb-6">Testimonials</h2>

        <div class="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-6">
          <!-- Testimonial 1 -->
          <div class="bg-gray-100 p-6 rounded-lg shadow-md">
            <p class="text-gray-700 mb-4">"Working with Vincent was an absolute pleasure. His attention to detail,
              creativity, and problem-solving skills are exceptional. I highly recommend him for any software
              engineering project." - Victor, CEO at Jzs Gamer Company</p>
          </div>

          <!-- Testimonial 2 -->
          <div class="bg-gray-100 p-6 rounded-lg shadow-md">
            <p class="text-gray-700 mb-4">"Derrick is a talented software engineer with a strong grasp of programming
              concepts. His dedication to delivering high-quality code and meeting project deadlines is commendable. I
              look forward to collaborating with Derrick again in the future." - Derrick, Lead Developer at ABC
              Corporation</p>
          </div>

          <!-- Testimonial 3 -->
          <div class="bg-gray-100 p-6 rounded-lg shadow-md">
            <p class="text-gray-700 mb-4">"Since i had no groups but worked together with some of my friends including
              my best lecturer,Prof Edward, I had the privilege of learning and working most of my projects alone on a
              complex software
              development project. My technical expertise, professionalism, and ability to communicate effectively
              made the project a success. I would not hesitate to learn more and patner with many on future projects." -
              Joab
              Mugane, Project Manager at DEF Solutions</p>
          </div>

          <!-- Testimonial 4 -->
          <div class="bg-gray-100 p-6 rounded-lg shadow-md">
            <p class="text-gray-700 mb-4">"As a coding instructor Professor Edward consistently demonstrated his deep
              understanding of software development principles and best practices. His contributions to our team was
              invaluable, and I would recommend him to anyone seeking a skilled and reliable developer." - Sarah
              Thompson, CTO at GHI Technologies</p>
          </div>

          <!-- Testimonial 5 -->
          <div class="bg-gray-100 p-6 rounded-lg shadow-md">
            <p class="text-gray-700 mb-4">"Bellam is also an exceptional software engineer who consistently delivers
              high-quality code and innovative solutions. His collaborative approach and willingness to go above and
              beyond expectations make him a valuable asset to any development team." - Bellam Muia, Software Architect
              at JKL Innovations</p>
          </div>
        </div>
      </div>
    </section>





    <!-- Contact Me Section -->
    <section id="contact" class="py-12 bg-gray-100">
      <div class="container mx-auto">
        <h2 class="text-3xl font-bold mb-6">Contact Me</h2>
        <form action="#" method="POST" class="max-w-lg mx-auto">
          <div class="mb-4">
            <label for="name" class="block text-gray-700 font-medium">Your Name</label>
            <input type="text" id="name" name="name" placeholder="Your Name"
              class="form-input mt-1 w-full px-4 py-2 rounded-md shadow-sm focus:outline-none focus:ring-blue-500 focus:border-blue-500"
              required>
          </div>
          <div class="mb-4">
            <label for="email" class="block text-gray-700 font-medium">Your Email Address</label>
            <input type="email" id="email" name="email" placeholder="Your Email"
              class="form-input mt-1 w-full px-4 py-2 rounded-md shadow-sm focus:outline-none focus:ring-blue-500 focus:border-blue-500"
              required>
          </div>
          <div class="mb-4">
            <label for="message" class="block text-gray-700 font-medium">Message</label>
            <textarea id="message" name="message" rows="4" placeholder="Your Message"
              class="form-textarea mt-1 block w-full px-4 py-2 rounded-md shadow-sm focus:outline-none focus:ring-blue-500 focus:border-blue-500"
              required></textarea>
          </div>
          <button type="submit"
            class="bg-blue-500 text-white px-6 py-2 rounded-md hover:bg-blue-600 focus:outline-none focus:ring-2 focus:ring-blue-500 focus:ring-opacity-50">Send
            Message</button>
        </form>
      </div>
    </section>

    <script src="script.js"></script>

    <!-- Footer Section -->
    <footer class="bg-gray-800 text-white py-6">
      <div class="container mx-auto flex justify-between items-left">
        <p>&copy; 2024 Jzs Gamer All rights reserved. </p>
        <p>Designed by Your Company</p>
        <ul class="flex space-x-4">

          <li><a href="#" class="hover:text-blue-500">Home</a></li>

          <li><a href="#projects" class="hover:text-blue-500">Projects</a></li>

          <li><a href="#about" class="hover:text-blue-500">About</a></li>

          <li><a href="#contact" class="hover:text-blue-500">Contact</a></li>

        </ul>
      </div>

      <div class="container mx-auto mt-4 text-center text-sm">

        <p>Connect with me on:</p>
        <ul class="flex justify-center space-x-4">
          <li><a href="#" class="hover:text-blue-500">LinkedIn</a></li>

          <li><a href="#" class="hover:text-blue-500">Twitter</a></li>

          <li><a href="#" class="hover:text-blue-500">GitHub</a></li>

          <li><a href="#" class="hover:text-blue-500">Instagram</a></li>

          <li><a href="#" class="hover:text-blue-500">Facebook</a></li>

          <li><a href="#" class="hover:text-blue-500">YouTube</a></li>

        </ul>
      </div>
    </footer>

    <script src"script.js"></script>
</body>

</html>
