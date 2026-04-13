<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Qsmart Tech - Digital queue management system for clinics, hospitals, and government offices. Reduce waiting times and improve service delivery.">
    <meta name="keywords" content="queue management, digital queues, hospital queue, clinic queue, service efficiency">
    <meta name="author" content="Qsmart Tech">
    <meta name="theme-color" content="#0a8f5a">
    <title>Qsmart Tech - Digital Queue Management System</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>

<!-- Skip Link for Accessibility -->
<a href="#main-content" class="skip-link">Skip to main content</a>

<!-- Header -->
<header role="banner">
    <div class="header-content">
        <h1>Qsmart Tech</h1>
        <p class="tagline">Smarter Queues. Better Service.</p>
        <p class="subtitle">Reduce waiting times in clinics, hospitals, and public offices.</p>
        <a href="#contact" class="cta-btn">Book a Demo</a>
    </div>
</header>

<!-- Navigation -->
<nav aria-label="Main navigation" class="main-nav">
    <ul class="nav-list">
        <li><a href="#problem">The Problem</a></li>
        <li><a href="#solution">Our Solution</a></li>
        <li><a href="#features">Features</a></li>
        <li><a href="#who-we-serve">Who We Serve</a></li>
        <li><a href="#contact">Contact</a></li>
    </ul>
</nav>

<!-- Main Content -->
<main id="main-content">

    <!-- The Problem Section -->
    <section id="problem" class="section-block">
        <div class="container">
            <h2>The Problem</h2>
            <p>Long queues, frustrated patients, and inefficient service delivery are costing institutions time and trust. Traditional queue systems lead to overcrowding, lost productivity, and poor customer experience.</p>
        </div>
    </section>

    <!-- Our Solution Section -->
    <section id="solution" class="section-block">
        <div class="container">
            <h2>Our Solution</h2>
            <p>Qsmart Queue is a digital system that manages, tracks, and optimizes queues in real time. Our intelligent platform transforms how organizations handle customer flow, improving efficiency and customer satisfaction.</p>
        </div>
    </section>

    <!-- Features Section -->
    <section id="features" class="section-block features-section">
        <div class="container">
            <h2>Why Choose Qsmart?</h2>
            <div class="features-grid" role="region" aria-labelledby="features-heading">
                <div class="feature-card">
                    <div class="feature-icon">📱</div>
                    <h3>Digital Queue Management</h3>
                    <p>No more physical lines. Patients and customers join queues from their phones and manage their time efficiently.</p>
                </div>

                <div class="feature-card">
                    <div class="feature-icon">⏱️</div>
                    <h3>Real-Time Updates</h3>
                    <p>Live wait time estimates, position tracking, and instant notifications keep customers informed every step of the way.</p>
                </div>

                <div class="feature-card">
                    <div class="feature-icon">📊</div>
                    <h3>Data Insights & Analytics</h3>
                    <p>Advanced analytics provide actionable insights to track performance and continuously improve service delivery.</p>
                </div>

                <div class="feature-card">
                    <div class="feature-icon">🔐</div>
                    <h3>Secure & Reliable</h3>
                    <p>Enterprise-grade security and 99.9% uptime SLA ensure your operations run smoothly without interruption.</p>
                </div>

                <div class="feature-card">
                    <div class="feature-icon">🌍</div>
                    <h3>Multi-Language Support</h3>
                    <p>Serve customers in their preferred language with support for 15+ languages across all platforms.</p>
                </div>

                <div class="feature-card">
                    <div class="feature-icon">⚡</div>
                    <h3>Lightning Fast</h3>
                    <p>Optimized for speed with instant queue updates and minimal latency across all devices.</p>
                </div>
            </div>
        </div>
    </section>

    <!-- Who We Serve Section -->
    <section id="who-we-serve" class="section-block">
        <div class="container">
            <h2>Who We Serve</h2>
            <p class="lead">Our platform is designed for any organization that needs efficient queue management:</p>
            <div class="industries-grid">
                <div class="industry-box">🏥 Hospitals</div>
                <div class="industry-box">🏨 Clinics</div>
                <div class="industry-box">🏛️ Government Offices</div>
                <div class="industry-box">🏪 Retail Stores</div>
                <div class="industry-box">🏦 Banks</div>
                <div class="industry-box">🎫 Box Offices</div>
            </div>
        </div>
    </section>

    <!-- Contact Section -->
    <section id="contact" class="section-block contact-section">
        <div class="container">
            <h2>Book a Demo</h2>
            <p class="lead">See how Qsmart Tech can transform your service delivery. Our team will contact you within 24 hours.</p>

            <div class="contact-wrapper">
                <div class="form-container">
                    <div id="successMessage" class="success-message" role="alert" aria-live="polite">
                        <strong>✓ Success!</strong> Thank you for your interest. We'll contact you within 24 hours.
                    </div>

                    <form id="demoForm" class="demo-form" novalidate>
                        <div class="form-group">
                            <label for="fullname">Full Name <span class="required">*</span></label>
                            <input type="text" id="fullname" name="fullname" required aria-required="true" placeholder="John Doe">
                            <span class="error-message"></span>
                        </div>

                        <div class="form-group">
                            <label for="email">Email Address <span class="required">*</span></label>
                            <input type="email" id="email" name="email" required aria-required="true" placeholder="john@example.com">
                            <span class="error-message"></span>
                        </div>

                        <div class="form-group">
                            <label for="phone">Phone Number</label>
                            <input type="tel" id="phone" name="phone" placeholder="+27 (0)70 123 4567">
                            <span class="error-message"></span>
                        </div>

                        <div class="form-group">
                            <label for="organization">Organization Name <span class="required">*</span></label>
                            <input type="text" id="organization" name="organization" required aria-required="true" placeholder="Your Hospital/Clinic/Business">
                            <span class="error-message"></span>
                        </div>

                        <div class="form-group">
                            <label for="industry">Industry <span class="required">*</span></label>
                            <select id="industry" name="industry" required aria-required="true">
                                <option value="">Select your industry...</option>
                                <option value="healthcare">Healthcare (Hospital/Clinic)</option>
                                <option value="government">Government Office</option>
                                <option value="retail">Retail</option>
                                <option value="banking">Banking</option>
                                <option value="other">Other</option>
                            </select>
                            <span class="error-message"></span>
                        </div>

                        <div class="form-group">
                            <label for="message">Message</label>
                            <textarea id="message" name="message" placeholder="Tell us about your queue management challenges..." rows="5"></textarea>
                        </div>

                        <button type="submit" class="form-submit">Book a Demo</button>
                    </form>
                </div>

                <div class="contact-info">
                    <h3>Contact Information</h3>
                    <div class="contact-detail">
                        <strong>📧 Email</strong>
                        <p><a href="mailto:demo@qsmart.tech">demo@qsmart.tech</a></p>
                    </div>
                    <div class="contact-detail">
                        <strong>📞 Phone</strong>
                        <p><a href="tel:+27701234567">+27 (0)70 123 4567</a></p>
                    </div>
                    <div class="contact-detail">
                        <strong>🌍 Website</strong>
                        <p><a href="https://qsmart.tech">https://qsmart.tech</a></p>
                    </div>
                    <div class="contact-detail">
                        <strong>📍 Location</strong>
                        <p>South Africa</p>
                    </div>
                </div>
            </div>
        </div>
    </section>

</main>

<!-- Footer -->
<footer role="contentinfo" class="footer">
    <div class="footer-content">
        <div class="footer-section">
            <h4>Qsmart Tech</h4>
            <p>Digital queue management system for organizations worldwide.</p>
        </div>
        <div class="footer-section">
            <h4>Quick Links</h4>
            <ul>
                <li><a href="#problem">The Problem</a></li>
                <li><a href="#solution">Our Solution</a></li>
                <li><a href="#features">Features</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </div>
        <div class="footer-section">
            <h4>Legal</h4>
            <ul>
                <li><a href="#privacy">Privacy Policy</a></li>
                <li><a href="#terms">Terms of Service</a></li>
                <li><a href="#cookies">Cookie Policy</a></li>
            </ul>
        </div>
    </div>
    <div class="footer-bottom">
        <p>&copy; 2026 Qsmart Tech. All rights reserved.</p>
    </div>
</footer>

<!-- Scripts -->
<script src="script.js"></script>

</body>
</html>