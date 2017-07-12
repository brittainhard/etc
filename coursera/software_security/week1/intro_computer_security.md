# What is computer security?
- Most developers are concerned with correctness.
    - A working blog, website, etc.
- Secure computer systems prevent undesirable behavior. Correctness is abotu what a system shouldnt do or shouldnt allow.
     - Presumes an adversary.

## Kinds of Undesirable Behavior
- Stealing information.
    - Corporate secrets
    - Personal information
- Breaking integrity, i.e.
    - Installing unwanted software
    - destroying records
- Breaking availability
    - DDOS
    - Unable to do these things.

## Significat Braches
- RSA, 2011
    - Compromised RSA SecurID devices.
- Adobe, 2013
    - Source code, customer records stolen.
- Target, 2013
    - 40 million credit and debit cards

## Defects and Vulnerabilities
- Breaches of vulnetaility
    - Software defect that can be exploited to cause undesirable behavior.
- A software defect means that it fails to meet its requirements.
- Defects occur in the software's design and implementation.
    - Flaws are defects in the design.
    - Bug is a defect in the implementation
- Vulerabilities are defects in software that allow for breaking shit.

### Example: RSA 2011 breach
- Exploited an Adobe Flash Player vulnerability
    1. Carefully crafted flash program taht would allow the attacker to use code of the attacker's choice, i.e. execute arbitrary code.
    2. Program was embedded in an excel spreadsheet.
    3. Used a spear phishing attack by sending the spreadsheet to an executive at the company.

## Considering correctness
- According to correctness, the flash vulnerability is just a bug.
    - Developers focus on bugs that would arise in typical situations.
- A normal user will never see most bugs, or will work around them.
    - Most bugs from no unit tests and no integration tests
- If would be very expensive to fix every bug before deploying.
    - Companies fix the most important ones.

## Considering Security
- An adversary is not a normal user! They will exploit bugs.

To ensure security, we must eliminate bugs and flaws that might compromise security. We must design the system so that any defects that remain ae harder to exploit.
