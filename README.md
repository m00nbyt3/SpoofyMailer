# SpoofyMailer
Easy to use Email Spoofer, with a default preconfigured and modificable SMTP server.

Usable in all Linux distros without installation.
In English and spanish, whatever you want.
<br></br>
> **Educational project created in early 2020**

This project was developed to demonstrate why the visible sender address in an email could not be fully trusted. At the time, attackers could manipulate the `From:` field so that a message appeared to come from another person or domain, making phishing, impersonation, and fraud easier.

Email security has since improved through several technologies:

- **SPF** verifies whether the sending server is authorized by the domain.
- **DKIM** uses cryptographic signatures to verify message integrity.
- **DMARC** checks whether SPF or DKIM aligns with the visible `From:` domain and allows domains to reject suspicious messages.
- **ARC**, reputation systems, and phishing filters provide additional protection.

These controls make basic spoofing more difficult, but they do not make email completely trustworthy. Compromised accounts, lookalike domains, and authenticated malicious messages can still be used in attacks.

This repository is intended solely for **authorized security testing, education, and controlled demonstrations**.

## Disclaimer

> **Disclaimer:** This project is provided for educational, research, and authorized security-testing purposes only. Do not use it on systems without the owner's explicit permission. Unauthorized use may violate applicable laws, policies, or agreements. The authors and contributors are not responsible for misuse, damage, data loss, or service disruption resulting from the use of this project. You are solely responsible for ensuring that your activities are lawful, authorized, and within the agreed scope.



![spoofymailer](https://user-images.githubusercontent.com/34653601/77941759-f51ca480-72ba-11ea-9bdd-2516130a911f.PNG)

To launch the application just write down in your teminal: ./spoofymailer

You could send text or HTML documents with all types of images, links, etc.

Built-in system to configure your own SMTP server, just write ./configure_SMTP

For creating your own SMTP server you could use pages like https://www.smtp2go.com/.

Created by m00n_byt3
