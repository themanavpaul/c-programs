## Unit 4

# Types of Software Maintenance

Software maintenance is the process of modifying a software product after it has been delivered to the customer. There are several techniques that can be used to perform software maintenance. In this answer, we will discuss the different techniques of software maintenance in detail. We will break down the discussion into the following subtopics:

1. **C** orrective Maintenance Techniques
2. **A** daptive Maintenance Techniques
3. **P** erfective Maintenance Techniques
4. **P** reventive Maintenance Techniques

### 1. Corrective Maintenance Techniques

Corrective maintenance is the process of fixing defects or errors in a software product after it has been delivered to the customer. There are several techniques that can be used for corrective maintenance, including:

- **Debugging:** Debugging is the process of finding and fixing defects or errors in a software product.
- **Patching:** Patching involves making small changes to a software product to fix specific issues without modifying the entire system.
- **Root cause analysis:** Root cause analysis involves identifying the underlying cause of a defect or error and addressing it to prevent similar issues from occurring in the future.

### 2. Adaptive Maintenance Techniques

Adaptive maintenance is the process of modifying a software product to adapt it to changes in its environment such as changes in hardware or operating systems. There are several techniques that can be used for adaptive maintenance, including:

- **Porting**: Porting involves modifying a software product so that it can run on different hardware or operating systems.
- **Migration**: Migration involves moving a software product from one platform to another while maintaining its functionality.
- **Reengineering:** Reengineering involves redesigning and rebuilding a software product so that it can run on new hardware or operating systems.

### 3. Perfective Maintenance Techniques

Perfective maintenance is the process of improving a software product by adding new features or enhancing existing ones. There are several techniques that can be used for perfective maintenance, including:

- **Refactoring:** Refactoring involves restructuring code without changing its functionality to improve its readability, maintainability, and performance.
- **Optimization:** Optimization involves modifying code to improve its performance without changing its functionality.
- **Feature addition:** Feature addition involves adding new features to a software product to enhance its functionality.

### 4. Preventive Maintenance Techniques

Preventive maintenance is the process of modifying a software product to prevent future problems or defects. There are several techniques that can be used for preventive maintenance, including:

- **Code reviews:** Code reviews involve reviewing code to identify potential issues and prevent defects from occurring.
- **Testing:** Testing involves running tests on a software product to identify potential issues and prevent defects from occurring
- **Documentation:** Documentation involves creating and maintaining documentation for a software product to make it easier to understand and maintain.

In conclusion, software maintenance is an important part of the software development life cycle and can be divided into different process models such as corrective, adaptive, perfective, and preventive maintenance. Each model has its own set of techniques that can be used to perform software maintenance. By using these techniques, software products can be kept up-to-date and free from defects or errors. It is important to choose the appropriate technique based on the type of maintenance required in order to ensure that the software product is maintained properly.


---

# Types of Software Maintenance Models

|                         | Quick Fix Model                                                       | Iterative Enhancement Model                                                                     | Reuse-Oriented Model                                                                                          |
|-------------------------|----------------------------------------------------------------------|------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------|
| Definition              | The Quick Fix model focuses on addressing immediate issues or bugs.  | The Iterative Enhancement model involves an incremental and iterative approach to enhancements. | The Reuse-Oriented model emphasizes the identification and reuse of existing software components.               |
| Stages                  | - Issue identification and prioritization.                           | - Requirements gathering and analysis.<br>- Iterative development and testing.<br>- Deployment and evaluation. | - Component identification and analysis.<br>- Component adaptation, if necessary.<br>- Integration and deployment.<br>- Evaluation. |
| When to apply           | When there are urgent bug fixes or immediate issues.                 | When ongoing enhancements and continuous improvement are required.                               | When there are opportunities to leverage existing software components.                                        |
| Advantages              |  <br>- Less costly and & Prompt.<br>- Rapid resolution of immediate issues.<br>- Quick turnaround time.<br>- Suitable for small-scale systems.  | - Incremental improvements based on feedback.<br>- Better alignment with evolving requirements.<br>- Flexibility. | - Efficiency through component reuse.<br>- Time and effort savings.<br>- Leveraging reliable and tested components. |
| Disadvantages           | <br>- Modifitcation is done without considering its imoact on entire product.<br>- May not address underlying structural issues.<br>- Lack of long-term planning.<br>- Not suitable for complex systems. | - Increased time and effort compared to quick fixes.<br>- Requires effective communication and collaboration.<br>- May require additional resources for iterative development. | - Dependency on the availability and suitability of reusable components.<br>- Adaptation and integration challenges.<br>- Potential compatibility issues with existing system.  |
| Example                 | Patching a critical security vulnerability in an application.          | Incrementally adding new features to a mobile app based on user feedback.                          | Integrating an open-source library for image processing in a web application.                                     |



----
# Metric for software maintenece 

Metrics for software maintenance are quantitative measurements used to assess the quality, performance, and efficiency of the maintenance process. These metrics help in understanding the effectiveness of maintenance activities, identifying areas of improvement, and making data-driven decisions. Here are several commonly used metrics for software maintenance, along with their subtopics and explanations:

**Defect Density:**

- Defects per KLOC (thousand lines of code): Measures the number of defects found in a specific amount of code.
- Defects per function point: Measures the number of defects in relation to the functionality provided by the software.

**Mean Time to Repair (MTTR):**

- Average time to fix a defect: Measures the average time taken to resolve and fix reported defects.
- Average time to restore service: Measures the average time taken to restore the system's functionality after a failure or disruption.

**Mean Time Between Failures (MTBF):**

- Average time between critical failures: Measures the average time between significant failures that impact the system's functionality.
- Average time between non-critical failures: Measures the average time between less severe failures that do not significantly affect system functionality.

**Change Request Effectiveness:**

- Percentage of successful changes: Measures the proportion of change requests that were implemented successfully without causing new defects or issues.
- Percentage of rejected changes: Measures the proportion of change requests that were rejected due to various reasons such as technical infeasibility or lack of alignment with business needs.

**Maintenance Effort:**

- Percentage of corrective maintenance effort: Measures the portion of maintenance effort dedicated to fixing defects and errors.
- Percentage of preventive maintenance effort: Measures the portion of maintenance effort dedicated to proactively identifying and addressing potential issues before they impact the software.

**Maintenance Cost:**

- Cost per defect: Measures the cost associated with fixing and resolving a single defect.
- Cost of maintaining legacy code: Measures the cost of maintaining and supporting older codebases.

**Customer Satisfaction:**

- Survey ratings or feedback: Measures customer satisfaction levels through surveys, feedback forms, or user ratings.
- Number of reported customer issues: Measures the volume of reported issues or complaints from customers.

**Test Coverage:**

- Code coverage: Measures the percentage of code that is exercised by tests.
- Functional coverage: Measures the extent to which the software's functionality is covered by tests.

**Mean Time to Detect (MTTD):**

- Average time to detect a defect or failure: Measures the average time taken to identify and detect a defect or failure.

**Mean Time to Prevent (MTTP):**

- Average time to implement preventive measures: Measures the average time taken to implement measures aimed at preventing future defects or failures.

---

| Basic Requirements of SCM | Principles of SCM |
| --- | --- |
| 1. Version Control | 1. Configuration Identification |
| 2. Change Management | 2. Change Control |
| 3. Build Management | 3. Configuration Status Accounting |
| 4. Release Management | 4. Configuration Auditing |
| 5. Environment Management | 5. Release Management |
| 6. Process Automation | 6. Build Management |

---
## Principles of SCM

1. **Configuration Identification:**
   Configuration identification is the process of identifying and defining the components of a software system and their relationships. The principles for configuration identification include:
   - Establishing naming conventions and version numbering schemes to uniquely identify each component.
   - Defining relationships between components to understand dependencies and ensure consistency.
   - Creating a configuration management plan to document the configuration identification process.

2. **Change Control:**
   Change control is the process of managing changes to a software system in a controlled manner. The principles for change control include:
   - Establishing a change control board (CCB) to review and approve changes.
   - Documenting all change requests and their status.
   - Ensuring that changes are properly tested before they are implemented.

3. **Configuration Status Accounting:**
   Configuration status accounting is the process of tracking the status of each component in a software system over time. The principles for configuration status accounting include:
   - Maintaining an inventory of all components in the system.
   - Tracking changes made to each component over time.
   - Providing reports on the status of each component.

4. **Configuration Auditing:**
   Configuration auditing is the process of reviewing a software system's configuration to ensure that it meets established standards and requirements. The principles for configuration auditing include:
   - Establishing baselines or standards for configurations.
   - Conducting periodic audits to ensure compliance with established standards.
   - Documenting audit results and taking corrective action as needed.

5. **Release Management:**
   Release management is the process of preparing software for release to customers or end-users. The principles for release management include:
   - Establishing a release management process that includes testing and deployment procedures.
   - Ensuring that all necessary components are included in a release.
   - Documenting the release process and tracking the status of each release.

6. **Build Management:**
   Build management is the process of compiling source code into executable software components or packages. The principles for build management include:
   - Establishing a build process that is repeatable and automated.
   - Ensuring that all necessary components are included in a build.
   - Documenting the build process and tracking the status of each build.

Overall, these principles guide the design and implementation of an effective SCM system to ensure that software development teams can manage changes, track configurations, prepare releases, and automate processes in a controlled and efficient manner.

---

## System Configuration Management (SCM)

System Configuration Management (SCM) is a set of processes and tools used to manage changes to software systems. SCM is concerned with the policies, processes, and tools for managing changing software systems. The goal of SCM is to ensure that all changes to a system are tracked, controlled, and documented.

### Requirements of SCM

1. **Version Control:**
   Version control is a key component of SCM. It involves tracking changes to source code and other artifacts over time. Version control systems allow developers to work on different versions of the same codebase simultaneously without interfering with each other's work. This helps prevent conflicts and ensures that changes are properly tracked.

2. **Change Management:**
   Change management involves the process of requesting, reviewing, approving, and implementing changes to a system. Change management processes help ensure that all changes are properly documented and reviewed before they are implemented.

3. **Release Management:**
   Release management involves the process of preparing software for release to customers or end-users. Release management processes help ensure that all necessary components are included in a release and that the release is properly tested before it is deployed.

4. **Build Management:**
   Build management involves the process of compiling source code into executable software components or packages. Build management processes help ensure that builds are repeatable and consistent across different environments.

5. **Configuration Auditing:**
   Configuration auditing involves reviewing the configuration of a system to ensure that it meets established standards and requirements. Configuration auditing can help identify configuration drift or inconsistencies between different environments.

6. **Baseline Management:**
   Baseline management involves establishing a baseline or reference point for a system at a specific point in time. Baseline management helps ensure that changes can be tracked against a known starting point.

Overall, SCM provides organizations with a structured approach for managing changes to software systems over time while ensuring quality, consistency, and traceability. SCM processes and tools help organizations manage complexity, reduce risk, and improve software quality over time.

---

## Version Control

### Definition

Version control, also known as source control or revision control, is a system that enables the management of changes made to files or a collection of files over time. It provides a way to track, control, and coordinate modifications made by multiple people or teams working on the same files or projects.

### Example

A common example of version control is Git, a distributed version control system widely used in software development. Git allows developers to create multiple branches of a codebase, work on different features simultaneously, and merge changes back into the main codebase.

### Steps

The following steps outline the typical workflow in version control:

1. **Initialization**: Create a new repository or initialize an existing directory as a repository to start tracking changes.

2. **Committing**: Make changes to files in the repository and commit them to create a new version. Each commit represents a specific set of changes made to the files.

3. **Branching**: Create branches to work on different features or experiment without affecting the main codebase. Branching allows for parallel development and isolation of changes.

4. **Merging**: Merge changes from one branch into another, combining the modifications made in different branches. Merging allows for integrating changes and resolving conflicts between branches.

5. **Conflict Resolution**: When changes made in different branches conflict, conflicts need to be resolved. This involves manually reviewing and deciding how conflicting changes should be combined or adjusted.

6. **History Exploration**: Explore the history of the repository to understand the sequence of changes made, who made them, and the reasoning behind them. This helps in understanding the evolution of the project and reverting to previous versions if needed.

### Cases in Steps

1. **Step 3: Branching**:
   - **Case 1**: Create a new branch for developing a specific feature. For example, creating a "login-feature" branch to implement the login functionality.
   - **Case 2**: Create a branch to fix a bug. For example, creating a "bugfix-123" branch to address a specific issue identified in the code.

2. **Step 4: Merging**:
   - **Case 1**: Merge the changes from the "login-feature" branch into the main branch once the feature is complete and tested.
   - **Case 2**: Merge bug fixes from the "bugfix-123" branch into the main branch to address the identified issue.

3. **Step 6: History Exploration**:
   - **Case 1**: Review the commit history to understand when and by whom a particular change was introduced.
   - **Case 2**: Use the "git log" command to view the commit messages and changes made in each commit.

## Change Management

### Definition

Change management is the process of managing and controlling changes to a software system in a controlled and organized manner. It involves the systematic handling of change requests, evaluating their impact, and implementing approved changes.

### Example

An example of change management is when a development team receives a request to add a new feature to a software application. The team follows a change management process to assess the feasibility of the request, estimate the impact on the existing system, and implement the approved changes.

### Steps

The following steps outline a typical change management process:

1. **Request Submission**: Users or stakeholders submit change requests, describing the desired changes to the software system.

2. **Change Evaluation**: The change management team evaluates the change request, considering factors such as feasibility, impact, cost, and alignment with business goals.

3. **Change Approval**: If the change request is deemed feasible and valuable, it is approved by the appropriate stakeholders or change control board (CCB).

4. **Change Implementation**: The approved changes are implemented following a defined process, which may involve coding, testing, and deployment activities.

5. **Change Review**: After implementation, the changes are reviewed to ensure they meet the specified requirements and do not introduce new issues.

6. **Change Documentation**: Documentation is updated to reflect the approved changes, including any modifications to user manuals, system documentation, or training materials.

## Release Management

### Definition

Release management is the process of preparing software for release to customers or end-users. It involves planning, coordinating, and controlling the release of software products or updates, ensuring that they meet quality standards and are delivered to users in a timely and efficient manner.

### Example

An example of release management is when a software development team prepares a new version of an application for deployment to end-users. This includes tasks such as finalizing the build, conducting testing and quality assurance, creating release notes, and coordinating the deployment process.

### Steps

The following steps outline a typical release management process:

1. **Release Planning**: Define the scope, objectives, and timeline for the release. This includes identifying the features and enhancements to be included, setting priorities, and estimating resource requirements.

2. **Build Preparation**: Generate the software build, which involves compiling the source code and bundling the necessary components, libraries, and dependencies.

3. **Testing and Quality Assurance**: Conduct thorough testing of the software to ensure that it meets the specified requirements and functions as expected. This includes functional testing, performance testing, security testing, and other relevant testing activities.

4. **Release Documentation**: Prepare release documentation, such as release notes, user manuals, installation guides, and any other relevant documentation that helps users understand the changes and how to use the new version.

5. **Release Approval**: Obtain the necessary approvals from stakeholders, including the project sponsors, product owners, and quality assurance teams, to proceed with the release.

6. **Deployment and Rollout**: Coordinate the deployment of the software to the target environment or production environment. This involves activities such as configuring the system, migrating data if necessary, and ensuring that the software is properly installed and functioning.

7. **Monitoring and Support**: Continuously monitor the release to ensure its stability and performance in the production environment. Provide support to end-users and address any issues or bugs that may arise.

8. **Post-Release Evaluation**: Evaluate the success of the release by gathering feedback from users, analyzing system performance and stability, and identifying areas for improvement in future releases.

### Benefits of Release Management

- **Efficient Delivery**: Release management ensures that software products or updates are delivered to users in a well-coordinated and efficient manner, reducing delays and ensuring timely availability.

- **Quality Assurance**: The rigorous testing and quality assurance processes involved in release management help ensure that the software meets the required quality standards and functions as expected.

- **Risk Management**: Release management helps mitigate risks by carefully planning and controlling the release process, minimizing the chances of errors or disruptions to the production environment.

- **User Satisfaction**: By properly documenting changes, providing release notes, and addressing any issues promptly, release management contributes to a positive user experience and higher customer satisfaction.

- **Traceability**: Release management maintains a record of all changes made to the software, making it easier to trace back and understand the evolution of the system, which is valuable for troubleshooting and future enhancements.

---
