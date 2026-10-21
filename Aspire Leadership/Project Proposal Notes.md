### What's actually happened in the last few months

**Exam/education systems (most visible to the public right now):**

- NEET-UG 2026 was conducted on May 3 for over 2.27 million students, then cancelled on 12 May after investigators found significant overlap between a pre-circulated guess paper and the actual exam paper, leading to arrests of NTA insiders. CBI investigators later found that the NEET-UG 2025 paper had been compromised by the same racket. The re-exam is happening today (June 21) for 22.8 lakh students, and even hours before it, allegations of a fresh leak on Telegram forced NTA to escalate complaints to CyberCrime authorities. [Wikipedia + 2](https://en.wikipedia.org/wiki/2026_NEET_controversy)
- Separately, CBSE's new On-Screen Marking system was exposed by student "ethical hackers" in May 2026. The striking part: CERT-In had flagged vulnerabilities in this evaluation system multiple times between February and May 2026, and reportedly found one portal unsuitable for production deployment — before it was deployed anyway. CERT-In then declined to respond to press questions about it. [The Wire](https://m.thewire.in/article/tech/uncert-in-cbse-fiasco-reveals-major-vulnerabilities-in-indias-cyber-security-systems)

**Government and critical-infrastructure targeting:**

- In January 2026, a Pakistan-aligned group (APT36/Transparent Tribe) launched a campaign targeting Indian government, academic, and strategic institutions to exfiltrate data and conduct persistent surveillance. [Center for Strategic and International Studies](https://www.csis.org/programs/strategic-technologies-program/significant-cyber-incidents)
- Seqrite's January 2026 threat report documented an APT campaign using malicious MSI installers and sideloaded DLLs to target India's defence sector and critical infrastructure, plus a hybrid campaign blending APT36, SideCopy, and hacktivist groups against defence and government networks. [Eventus Security](https://eventussecurity.com/cybersecurity/india/cyber-attacks/)
- In February 2026, a threat actor advertised roughly 35,000 stolen records from an Indian IT/consulting firm on a dark-web forum for $200. [Eventus Security](https://eventussecurity.com/cybersecurity/india/cyber-attacks/)
- BSNL (state telecom) was hit by two DDoS attacks in close succession that knocked its website offline for days, disrupting bill payments and customer service nationwide.

**Scale, for your proposal's stats section:** CERT-In handled over 29.44 lakh cyber incidents in 2025 alone. A 2026 Check Point report found Indian organisations face an average of 3,195 attacks weekly, with government bodies recording 4,912 weekly attacks per organisation and education institutions even higher at 7,684. The WEF now ranks cybersecurity as India's #1 national risk, noting that since the Israel-Hamas war, over 150 pro-Palestinian hacktivist groups have specifically targeted Indian critical infrastructure. [Press Information Bureau + 2](https://www.pib.gov.in/PressReleasePage.aspx?PRID=2217537&reg=3&lang=1)

### How this hits the government and affiliated organizations

- **Trust collapse at scale** — two NEET cycles compromised in a row, a board exam evaluation system exposed by 17-year-olds rather than the agency meant to catch it.
- **Human cost** — at least three students reportedly died by suicide following the paper-leak fallout, which is the kind of consequence that makes this a community issue, not just an IT one. [Wikipedia](https://en.wikipedia.org/wiki/2026_NEET_controversy)
- **Disproportionate harm to the less privileged** — the WEF specifically frames cyber risk as a "multiplier" on inequality, since disruptions to subsidy portals, exams, or public banking hurt informal workers and rural/marginalized candidates hardest, echoed in the NEET commentary about candidates who can't afford repeat travel and coaching. [Medium](https://medium.com/@sohankanna/the-perfect-digital-storm-why-the-wef-ranks-cybersecurity-as-indias-1-risk-in-2026-e61c5350861b)
- **National-security exposure** — defence-sector and government-network intrusions by state-linked actors, not just opportunistic criminals.
- **Economic cost** — projected fraud losses crossing ₹1.2 lakh crore for 2025.

### Why these attacks keep happening

- Digitization (Digital India, UPI, online evaluation systems) is scaling faster than the security budget or staffing behind it.
- A Cisco study found 37% of cybersecurity technology in Indian organisations, including government departments, is considered outdated by security professionals. [MIND OF CYBER](https://www.mindofcyber.com/2025/10/06/india/)
- 62% of cloud-environment detections trace to misconfigurations — exposed storage buckets, excessive permissions — rather than sophisticated hacking. [Eventus Security](https://eventussecurity.com/cybersecurity/india/cyber-attacks/)
- Most high-impact breaches trace back to compromised credentials and weak identity governance, not zero-day exploits.
- Critical functions get outsourced to third-party vendors (exam printing/transport, IT contractors) without matching security audits — exactly the chain that broke in the NEET case.
- Single-point-failure system design: a single national exam for 22+ lakh students on one day means one leak collapses the entire system.
- Geopolitically motivated state actors and hacktivist groups have an active, growing incentive to target Indian institutions specifically.

### Why the security authorities are failing to keep up

- **No central authority.** The Parliamentary Standing Committee on Finance reported in 2023 that India lacks a centralized cybersecurity authority, calling the existing decentralized approach a barrier to a unified, proactive response — and recommended one be created. It still doesn't exist. Responsibility is split across CERT-In, NCIIPC, NTRO, MHA, and MeitY with overlapping mandates. [Carnegie Endowment for International Peace](https://carnegieendowment.org/research/2025/09/mapping-indias-cybersecurity-administration-in-2025?lang=en)
- **Warnings without teeth.** The CBSE case is the clearest evidence: CERT-In _did_ flag the problem repeatedly and was ignored by the deploying body, with no mechanism to force a fix or stop the rollout.
- **A massive talent gap.** India needs roughly a million additional cybersecurity professionals just to meet 2026 demand but has only about 200,000 trained practitioners — an 80% gap — with vacancies taking 6-8 months to fill. [Cyber Blogs](https://blogs.pivotsec.in/blogs/growing-cybercrime-the-need-for-an-indian-cybersecurity-force)
- **Weak regulatory deterrence.** India hasn't joined the Budapest Convention on cybercrime, hampering cross-border investigation, and enforcement under the DPDP Act is still maturing, so organizations that mishandle data face limited real consequences. [MIND OF CYBER](https://www.mindofcyber.com/2025/10/06/india/)
- **No clear channel for good-faith reporting** — the students who found the CBSE flaws emailed CERT-In directly and got no response, which is a structural failure in how the system absorbs outside warnings.

**What is your proposed solution / what could you do to address this issue?**

My solution is to build cybersecurity education into the school and college level, starting in my own community, instead of treating it as something only IT graduates learn later. India is short by roughly a million cybersecurity professionals against a trained pool of only about 200,000 — and that gap isn't abstract. It's the reason warnings get raised and nobody's around to act on them in time. What convinces me this is fixable at a youth level is something I noticed in my own research: the CBSE evaluation flaws weren't caught by a government agency. They were caught by Class 12 students poking around the system themselves. The skill is already there. What's missing is structure — a place for that curiosity to turn into actual capability instead of getting brushed off. [Cyber Blogs](https://blogs.pivotsec.in/blogs/growing-cybercrime-the-need-for-an-indian-cybersecurity-force)

So concretely, I want to start small: peer-led cyber-hygiene and ethical-hacking workshops in my school/college, modeled loosely on what CyberPeace Foundation already runs through its CyberPeace Corps and eSaksham programs, but built and led by students for students. The goal isn't to replace CERT-In — it's to grow the next generation of people who'll actually staff it, and to give young people who already spot these flaws a real channel to report them, instead of emailing an agency that goes silent.
### 1. What is an important issue that you care about in your local community? *

I care about how broken trust has gotten between Indian citizens and the digital systems we are forced to rely on. NEET UG 2026 was cancelled after a leaked paper compromised the exam for 2.2 million students  and what stuck with me wasnt just the leak, it was the response. NTA initially dismissed the leak reports as misinformation before reversing course days later. Then this week, with the re-exam happening, fresh leak rumors surfaced again and the government's answer was to block Telegram nationwide rather than fix whatever lets question papers leak in the first place. Around the same time, students found serious holes in CBSE's new evaluation system, holes CERT In had reportedly flagged months earlier. CERT-In never responded to press questions about it. That pattern i.e deny, then react with a blunt fix, then go quiet is what actually worries me. It tells students like me that the system protects itself before it protects us.

### 2. Now think about or research an organization that is addressing the issue either within your context or elsewhere. What is the organization and how did you learn about it? *

I came across the CyberPeace Foundation while digging into this, an Indian nonprofit started in 2005 by Vineet Kumar, a former Jharkhand Police CTO. What caught my attention is that it doesnt wait for government to act. In 2017 it stepped in to help protect Aadhaar data during a leak spike in Jharkhand, and it runs CyberPeace Corps, a volunteer network that trains everyday citizens not just engineers — to spot scams and practice basic digital hygiene. It felt like the right counter example to everything Id just read, instead of an agency that flags a problem and moves on, here's a group built specifically to fill the silence afterward.

### 3. What is that organization’s mission statement? What do you think is effective about that mission? What might you change? *

Their mission is to make the internet more secure, stable, trustworthy, and inclusive for everyone, working as a neutral space where citizens, government, law enforcement, and independent researchers can collaborate. CyberPeace Foundation
The thing which I like the most about it is that it doesnt wait around for a central authority that doesnt really effective in India yet. It builds trust and capacity from the ground up, which matters when the visible government response to a crisis is usually a ban or a denial rather than a fix.
What Id change is that the mission is so broad it could mean almost anything. It never names accountability directly, even though that's the actual gap CERT-In can flag a flaw, but nobody can stop a vulnerable system from launching anyway. Id want their mission to say plainly that they are closing the gap between a warning being raised and something being done about it. Thats a sharper promise, and its the one this moment actually needs.

### Q1. How did you recognize the symptoms/signs that prove the problem exists?

I noticed it because the same story kept repeating across completely different parts of the system, not just one exam. NEET got compromised in 2024, again in 2025, then cancelled outright in 2026. CBSE's evaluation system had holes that students my own age found, holes CERT-In had apparently flagged months earlier and let through anyway. BSNL went offline for days after a DDoS attack. State-linked groups were caught targeting Indian government and defense networks, not just random hackers chasing money. Different sectors, different attackers, same shape every time: deny first, slap on a reactive fix, never actually explain why the warning got ignored. Once I saw it happening in education, telecom, and government all at once, it stopped looking like bad luck in one exam and started looking like a pattern across the whole system.

---

### Q2. What research or data would be helpful to further understand this problem? Why is it important to do this research prior to implementing a plan?

Three things, specifically, how often warnings like CERT In's actually get raised and ignored, so I know if this is a technical problem or an accountability one; what's actually worked in CyberPeace Foundation's own programs, like completion rates or how many participants went on to pursue cybersecurity, so I'm building on evidence instead of guessing; and what my own classmates think when they hear "cybersecurity" — genuinely curious, or already convinced it's not for them.
That last one might matter most. Right now my plan runs on instinct, not evidence , and that's exactly the mistake I'm criticizing everyone else for making. If I skip the research and jump straight to running workshops, I might build something that looks like a fix but doesn't actually move anyone closer to a career, which was the whole point. Doing the homework first means I design for what's actually missing, not what I assume is missing.

---

## Peer Discussion Post #2

**Topic Channel: Justice & Equity**

My project proposal focuses on the problem of teacher shortages in government schools in West Bengal, India, and the impact it has on the quality of education that children — especially in rural areas — are able to access. While I am not a professional in the field of education or policy, I have grown up observing this problem closely in my own community. Watching teachers lose their jobs due to administrative decisions, and seeing how the remaining teachers are stretched thin between teaching responsibilities and non-academic duties like managing the midday meal program, made me realize how deeply systemic this issue is. My experience is largely observational and community-based, but it has given me a genuine and grounded understanding of how institutional failures translate into real consequences for real children.

One piece of advice I would offer to anyone engaging in the justice and equity space is to always keep the most affected people at the center of your research and solution. It is easy to get caught up in data and policy, but the real test of any intervention is whether the people experiencing the problem actually feel its impact improve in their daily lives.

One question I have is — when working on equity-focused problems in communities that are geographically or socially distant from decision-makers, how do you ensure that the voices of the most marginalized are genuinely heard and not just represented on paper?

---

## Week 4 — Proposal Development

### Q1. What is the problem you have identified?

India's government and public institutions . exam boards, telecom, education evaluation systems, defense networks , keep getting breached or exposing people to harm, and every time, the response is the same, deny it first, then slap on a reactive fix, never actually explain why a warning was ignored. NEET has been compromised three years running. CBSE's evaluation system had flaws CERT In flagged months in advance and let through anyway. This isn't a string of bad luck , it's a system that keeps breaking the same way because the people and structures meant to catch problems early either don't exist yet or don't have the authority to act.

---

### Q2. What do you think the root cause of this problem is?

Two things, tangled together. First, India is short by roughly a million trained cybersecurity professionals , so even when a warning gets raised, there often isn't enough skilled capacity to act on it fast. Second, there's no single authority empowered to actually stop a vulnerable system from launching, responsibility is split across agencies that can flag a problem but not block deployment. Underneath both is the same gap: nobody is being trained early enough, or given a real channel, to catch these things before they become national headlines.

---

### Q3. Who or what is affected?

This actually cuts across several groups, not just exam-takers. Financial sector users — Angel One's breach alone exposed 7.9 million people's trading and identity data. Telecom customers nationwide, when BSNL's DDoS attack knocked out bill payments and service for days. Government and defense personnel, given that state-linked groups have been caught specifically targeting Indian government and defense networks for espionage, not just money. And yes, students too — NEET affected 2.27 million candidates this year, CBSE's board exam touches over 17 lakh annually — but they're one visible slice of a much bigger group: every Indian relying on a government digital service, which is most of the country now, given over 100 crore internet connections and roughly 29.44 lakh cyber incidents CERT-In handled in 2025 alone. Government bodies themselves face about 4,900 attacks a week per organization. And less directly but still affected: the cybersecurity field itself, which is short close to a million professionals who could be working on this right now instead of watching from outside.

---

### Q4. Why should the problem be solved?

Because the cost isn't abstract. Cyber fraud losses in India were projected to cross ₹1.2 lakh crore in 2025. Defense networks have been actively targeted by state-linked groups, which makes this a national security issue, not just an inconvenience. Families have absorbed real harm too — from the financial and emotional toll on the 7.9 million people whose data was exposed in the Angel One breach, to the students and parents who've lived through repeated exam cancellations and re-tests, with at least a few NEET-related student suicides reported amid the chaos. And the damage isn't evenly spread — disruptions to exams, subsidy portals, and public banking hit families with the fewest resources to absorb a setback the hardest. Every cycle this goes unfixed, trust in digital governance erodes a little more, right as the country is betting its economic future on that same digital infrastructure.

---

### Q5. Why do you think this problem has not been solved yet?

Partly because nobody is in charge of actually fixing it , a parliamentary committee recommended a single central cybersecurity authority back in 2023, and it still doesn't exist. Responsibility is split across so many agencies that accountability gets lost in the handoff. Partly because the talent shortage means even good intentions run into a wall of not enough trained people to execute them. And partly, I think, because reactive fixes are easier to announce than structural ones — banning an app makes a headline; building a functioning early warning pipeline doesn't. The CBSE case is the clearest proof: students tried to report the problem directly to CERT In and were met with silence. The system doesn't just lack capacity , it doesn't always have a working door for help to come through.

---

### Q6. How do your strengths and experiences prepare you to address this problem?

Honestly, I'm not coming in with a long list of credentials — I'm a freshman who recently started learning cybersecurity, with a few small personal projects behind me. But what Data Science has already given me is a habit of looking past the surface of a problem into what's actually causing it — which is exactly what this issue needed. When I started digging into India's cybersecurity failures, it wasn't hard to see that the breaches themselves weren't the real story; the pattern underneath them was. That kind of structural thinking, plus the fact that I'm genuinely embedded in the online student world I'm trying to reach, feels like a real starting point even if it's a modest one.

---

### Q7. How would you develop skills and knowledge to better equip you to approach this problem?

Keep learning cybersecurity deliberately , I've just started and I know how much ground there is to cover. Alongside my Data Science coursework I want to work through platforms like TryHackMe, khan academy, not to become an expert overnight but to earn enough credibility to run sessions people actually trust. I'd also want to learn from CyberPeace Foundation's model directly , either through their volunteer programs or by speaking with someone like Vineet Kuma, to understand what's worked at scale before I build something from scratch.

---

### Q8. What additional information or skillset might you look for within your team?

Someone with communication and design skills, since building content that gets students to actually show up is a different skill from building content that's technically correct. Someone with more cybersecurity depth than me, at least in the early sessions, so the material has real weight behind it. And someone who's good at community management , keeping a Discord or group space alive between sessions takes a specific kind of patience I'm not sure I have alone. I'd look for all of these in online student communities, and cultivate them by being upfront about what the project is trying to do , people are more likely to join something with a clear purpose than a vague invitation.

---

### Q9. How does the problem link to your dream job?

AI security is exactly where this problem is heading. The same institutions getting breached today , exam boards, government portals, defense networks , are the ones that will be running AI systems tomorrow, and the security gaps that exist now don't close just because the underlying technology gets smarter. If anything, AI makes the stakes higher: a compromised AI system in a government context isn't just a data leak, it's a decision making layer being manipulated. Working in AI security means I'd be sitting right at the intersection of the two things this programme made me think about most , the technical failure and the human cost of ignoring it. What Weeks 3 and 4 did was make that connection feel less abstract. I wasn't just identifying a community problem for an assignment; I was essentially mapping out the landscape I want to spend my career working in. The project I've proposed , getting more young people interested in and trained for cybersecurity , is also, quietly, a pipeline into the exact field I'm trying to enter myself.

---
### 1. What is a potential solution you have identified to help improve the problem? What is unique about your idea? *

Since I'm doing my degree online myself, a physical school club doesn't really fit my situation — so the idea is a peer-led, virtual-first cybersecurity awareness group: short live sessions over Zoom or Discord, run by students for students, not limited to one campus. I haven't started anything yet — this is still an idea I'm working out, not something running. What I think is unique is the same thing that makes it work for me personally: because it's online from day one, it's not boxed into one school's students or one city. It can pull together curious students from anywhere, the same way I'm already learning in a virtual environment myself. The focus would still be hands-on exposure and a real career path, not just a one-off hygiene talk — and a way for students who spot something concerning to actually have someone to tell, instead of emailing an agency into silence.

---
### 2. Who would you need on your team to implement the project? Why? *

A couple of other students genuinely curious about this, found through online communities or social media, since I can't run sessions alone or pretend to know everything myself. For credibility and actual depth, I'd want to invite real practitioners as guest speakers rather than relying only on myself — people like Sunny Nehra, an ethical hacker who's directly spoken on Indian institutional cybersecurity failures like the CBSE case, or Trishneet Arora, founder of TAC Security, who built a global vulnerability-management company starting as a teenager himself — someone whose own story is the exact "you can start young" proof I'd want students to hear directly, not just read about. I'd also still want an adult mentor or advisor for legitimacy, possibly someone from CyberPeace Foundation, since I don't have an in-person teacher-sponsor the way a physical school club would have. And practically, someone comfortable managing an online community space to keep people engaged between sessions, plus someone good at outreach/design, since without a hallway to put up posters in, getting people to actually show up online is its own challenge.

---

### 3. What resources or support will you need to carry out your project? *

A free video call platform to run sessions, and an online space — a Discord server or similar — for people to stay connected between them. Free published material from CERT-In and CyberPeace Foundation to build the curriculum instead of starting from zero. Access — even just occasional, even just one session — to practitioners willing to speak, like Sunny Nehra or someone from Trishneet Arora's TAC Security, since hearing from people actually working the field matters more than another slide deck. Some way to reach people in the first place, since I don't have a built-in audience — likely social media and word of mouth. And ideally, a connection to an established organization like CyberPeace for legitimacy, since "a student running Zoom calls" needs some outside credibility to be taken seriously early on.

---
### 5. What do you think the the timeline will be to implement this project? *

Right now I'm at zero — no steps taken, just the idea. Realistically: a month or so to research and figure out what students actually want, a month to build a basic curriculum and find a couple of co-organizers online, then a pilot session to see if the format even works before committing to anything regular. I'd rather treat the first few months as testing whether this is viable at all, instead of promising a polished program before I know if people will show up.

---

### 1. What key performance indicators will you reference to gauge the success of your project plan? How will you monitor the success of your project plan? Choose at least 2-5 KPIs to describe. *

I'd track five things, mostly using free tools I already have access to:
Attendance and retention — how many students show up to each session, and whether the same people keep coming back versus a one-time spike. I'd track this with a simple sign-in form each session.
Knowledge gained — a short pre- and post-session quiz on basic cyber hygiene, so I'm measuring actual learning, not just attendance. Even a 5-question Google Form before and after would show whether anything's sticking.
Shift in career interest — a simple survey question, "Would you consider cybersecurity as a career?", asked at the start and repeated a few months in. This is the KPI closest to the actual point of the project, since hygiene awareness alone doesn't fix the talent gap.
Community engagement — activity in the Discord or group chat between sessions: questions asked, resources shared, people helping each other. A quiet, dead group chat would tell me the content isn't landing even if attendance looks fine.
Real follow-through — the number of participants who take a next step on their own: signing up for a free course, joining something like CyberPeace Corps, or just reaching out to ask how to learn more. This one's harder to measure and slower to show up, but it's the actual outcome that matters, so I'd check in informally every few months rather than expect it instantly.

---

### 1. What do you want to achieve with your project? *

Two things, really. First, the basic goal — a group of students who actually know how to spot a scam, protect their data, and handle the digital systems they're forced to rely on. But the bigger goal is sparking real interest in cybersecurity as something they could do, not just something they should be cautious about. If even a handful of participants walk away seriously considering it as a path, that's the actual win — because that's what chips away at the talent gap I keep coming back to.

---

### 2. How will you track your project’s progress? *

Mostly through the KPIs I laid out earlier — attendance and retention across sessions, a short pre/post quiz to see if knowledge actually improved, a repeated survey question on career interest, how active the community stays between sessions, and informal check-ins later to see who took any next step on their own. I'd review these against my own timeline at the end of each phase — research, build, pilot, regular run — rather than waiting until the end to find out if anything worked.

---
### 3. What are some things you think you might have to create (workshops, events, products, etc.)? At what stages of the plan would you need to have these resources developed? *

In the research phase, a short survey to understand what students already know and want — needed before I build anything. In the build phase, actual workshop content: slides, a basic curriculum, and a hands-on "find the bug" style exercise, since lecturing alone won't hold attention. Right before launch, some simple outreach material — social posts, a short pitch — to actually get people in the door. During the regular run, a rough topic calendar so sessions don't repeat or feel random, plus a small resource hub in the Discord pulling from CERT-In and CyberPeace's free material. And toward the end, something like a small mini-competition or capture-the-flag style event, loosely modeled on CyberPeace's eRaksha, to give the program a visible finish line instead of just fading out.

---

### 4. Who could join your team to strengthen it? How would you recruit these team members? *

Other students who already lean technical or curious — I'd look in online communities tied to my own degree program, plus general student spaces on Discord and social media where people already talk about coding or tech. Someone with design/communication skills to make outreach actually land, recruited the same way. And for credibility, I'd reach out directly to organizations like CyberPeace Foundation, or practitioners like Sunny Nehra or Trishneet Arora, to ask if they'd join even one session as a guest, rather than expecting a full-time commitment from people that established.

----

### 5. Identify one challenge you think you might face and how you will overcome it. *

Legitimacy. I'm a student running this entirely online, with no physical school backing it and no track record yet — that's a real barrier to getting people to take it seriously or show up at all. I'd handle it by starting small and honest: pilot the first session with people I already know, use that as proof it actually works, and lean on a connection to an established organization like CyberPeace Foundation, even informally, so it's not just "some student on Discord" asking people to join. Credibility built slowly from a real first session is more convincing than a polished pitch with nothing behind it yet.

---

### 1. How did you determine what stakeholders are relevant for your project? *

I worked backward from two questions: who actually has the power to help or block this, and who genuinely cares whether it happens. That pulled in the obvious group — the student participants themselves — but also people I'd touched on earlier without labeling them this way: a mentor connection (likely through a organization), guest practitioners I'd want to invite, and whoever evaluates this project for ASPIRE itself. I tried to separate "people who'd be affected" from "people who could actually move this forward or stall it," since those aren't always the same group, and a stakeholder map only helps if it's honest about that difference.

----
### 2. Which stakeholder(s) fit into the high power, high interest category? How will you keep this/these stakeholder(s) satisfied and well-informed? *

A mentor or advisor connected to Cybersecurity organization fits here. They'd have real power — credibility, access to material, maybe even a willingness to connect me to others — and genuine interest, since youth-led cyber education is literally their mission. I'd keep them satisfied and informed with short, regular updates after each phase , be specific about what I'm asking for each time, and actually show them outcomes — quiz results, attendance, feedback — so the relationship feels like a real collaboration, not just me asking for favors.

---
### 3. What stakeholder(s) have a high degree of power but low interest in your project? How will you keep that stakeholder satisfied? *

Guest practitioners I'd want to invite, whose name and credibility carry a lot of weight for the project, but realistically they have limited bandwidth and no ongoing personal stake beyond whatever single session they agree to. I'd keep them satisfied by respecting that boundary — making the ask narrow and easy (one session, clear topic, no open-ended commitment), being well-prepared so their time isn't wasted, and following up afterward with a short, genuine thank-you and a quick note on the impact, rather than pulling them into regular updates they didn't sign up for.

---

**Reflection 1: Applying Aspire Leaders Program Skills in My Future Leadership Journey**

The nine weeks I spent in the Aspire Leaders Program have fundamentally shifted the way I understand leadership — not as a title or position of authority, but as a practice rooted in self-awareness, adaptability, and purposeful action. Three frameworks in particular have resonated deeply with me and will continue to shape my leadership journey going forward.

The first is the **Ikigai Venn Diagram**. Before encountering this framework, I had a fragmented sense of my professional direction. Ikigai challenged me to sit at the intersection of what I love, what I am good at, what the world needs, and what I can be paid for. Mapping this out revealed that my passion for community development and my skills in communication and organization could translate into meaningful social impact work. This clarity has already influenced how I am approaching internship and volunteer opportunities — I now evaluate them against my Ikigai rather than simply accepting whatever is available.

The second framework is **SMART Goal Setting**. I applied this directly in an academic group project where our team was struggling with vague objectives and missed deadlines. By introducing SMART criteria — ensuring our goals were Specific, Measurable, Achievable, Relevant, and Time-bound — we restructured our project plan entirely. The result was a more focused team, clearer accountability, and a successfully submitted deliverable ahead of schedule. This experience confirmed that structured goal-setting is not bureaucratic overhead; it is what transforms good intentions into real outcomes.

The third concept that transformed my thinking is **contextual intelligence**. Professor Tsedal Neeley's leadership domains reinforced that effective leaders do not apply a one-size-fits-all approach. They read their environment, their team, and their moment. Growing up in a community where resources and institutional support were inconsistent, I often saw problems as permanent barriers. Reframing institutional voids as _opportunities for innovation_ gave me a new lens entirely. I now look at gaps in my community — in mentorship, digital access, and youth development — and ask myself how I might help fill them rather than waiting for systems to change.

Looking long-term, this program has crystallized the kind of leader I aspire to be: one who is inspirational without being distant, relational without losing direction, and cooperative without sacrificing accountability. I want to lead in a way that builds other people's capacity, not just delivers results. The Aspire Leaders Program gave me both the vocabulary and the frameworks to pursue that vision with intention, and I carry those tools forward into every academic, professional, and community space I step into.

---

**Three concepts I'm eager to explore more:**

**1. Stakeholder Mapping**

Before this programme, I thought the hardest part of solving a problem was understanding the problem itself. Stakeholder mapping flipped that assumption. Working through who actually has power over my project — and realizing that power and interest don't always overlap the way you'd expect — was genuinely surprising. What I find unfinished about it is the human layer: the framework tells you _who_ matters, but not _how_ to actually get a high-power, low-interest person to care even briefly, or how to earn trust with someone who has no reason yet to take a student seriously. I want to get better at that — not the theory, but the actual conversation. After ASPIRE, I plan to practice this by mapping stakeholders for every project I take on, even small ones, and paying attention to where my assumptions were wrong once things actually start moving.

**2. Problem Identification and Root Cause Analysis**

This is the one that changed how I think most permanently. I came into this programme frustrated by India's cybersecurity failures but treating them as a string of separate events. Working through the "why" systematically — what's the root cause, who bears the cost, why hasn't it been solved — forced me to stop reacting to headlines and start asking structural questions. What still feels complex to me is the line between a root cause and a symptom: I said the talent gap was a root cause, but someone could argue that's also a symptom of how cybersecurity education is designed. I don't think I fully resolved that, and I want to. I plan to strengthen this by reading more about systems thinking — specifically how people like Donella Meadows frame leverage points in a broken system — and applying it to my own project as it develops.

**3. Pitching and Communicating to Stakeholders**

Writing the pitch for Week 7 was the most uncomfortable part of this programme for me, and probably the most useful. I'm a technical person naturally drawn to explaining _what_ something is rather than _why_ someone should care about it. Crafting a pitch forced me to lead with the human cost — students affected, families absorbing losses they can't afford — rather than the statistics I was more comfortable with. What I still struggle with is calibrating this for different audiences: the pitch I wrote for CyberPeace Foundation doesn't work the same way if I'm talking to a student peer, or to a skeptical teacher I'm trying to get a room from. Learning to adjust the same core story for different listeners is a skill I know I haven't fully developed yet. I plan to work on this by deliberately practicing in low-stakes situations first — explaining my project to friends who aren't from tech backgrounds and seeing where I lose them.

---

Open-Ended Reflection 2 When responding to the following prompt, consider the journey you have engaged in over the last 9 weeks. Think about the content, frameworks, masterclass sessions, discussion prompts, and assignments. Please ensure that you adhere to each word count minimum and write responses in English.

Reflection 2- at least 300 words. In Week 7, you developed a pitch for your project proposal. Imagine you have the opportunity to pitch your project to an influential stakeholder (donor, partner, community member, etc.). Write your pitch below. Guiding Questions

- In what ways did developing your project proposal support your personal, professional, and/or cultural awareness?
- What stakeholder are you targeting and why?
- Why does the problem you are addressing matter to your community?
- How will you address this problem effectively?
- What are the benefits of implementing your plan successfully?
- In Week 7, you developed a pitch for your project proposal. Imagine you have the opportunity to pitch your project to an influential stakeholder (donor, partner, community member, etc.). Write your pitch below. *
---

**Pitch to: CyberPeace Foundation — as a potential partner organization**

---

My name is Taniya, and I'm a first-year Data Science student from India. I'm going to be upfront with you: I don't have a running initiative, a team, or a budget. What I have is a problem I can't stop thinking about, and a plan I want your help making real.

India is being hit from every direction digitally — NEET compromised three years running, CBSE's evaluation system exposed by students my own age after CERT-In's warnings were ignored, BSNL knocked offline, state-linked groups quietly probing defense networks. The pattern isn't bad luck. It's a system that keeps breaking the same way because the people who'd fix it don't exist yet — India is short by roughly a million trained cybersecurity professionals, and nobody is seriously building that pipeline at the ground level.

That's what my project is trying to do. A peer-led, virtual cybersecurity education initiative — online sessions run by students for students, focused not just on hygiene awareness but on showing young people that this is a real career they can enter. Hands-on, interest-first, built for the online environment most of us already live in. The CBSE case is the clearest proof this is possible — the students who found those flaws weren't trained security professionals. They were curious. That curiosity already exists. It just needs somewhere to go.

What I'm asking from CyberPeace Foundation isn't money. It's credibility and curriculum — access to your existing eSaksham material, a mentor connection, and ideally one guest speaker slot to show participants what this field actually looks like from the inside. In return, you'd be reaching a new cohort of students who might otherwise never find their way to your programs at all.

Developing this proposal changed how I see myself in this problem. I came in as a frustrated observer. Working through the research, the stakeholder mapping, the planning — I stopped seeing this as someone else's job to fix. The problem is solvable. I just need a partner who's already proven it can be done.

I'd like that partner to be you.