# Port Scanning

Port scanning is a fundamental technique in ethical hacking used to discover open ports on a target system. Ports are endpoints for network communication, and knowing which ports are open is essential for identifying potential vulnerabilities.

## Using Nmap

We'll start with Nmap (Network Mapper), a widely used tool for port scanning. Here's how to scan a target host:

```bash
nmap -p 1-100 example.com
```

This command scans ports 1 through 100 on example.com and provides detailed information about open ports.
