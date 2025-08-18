<!-- Do not translate this -->
<details>
<summary>
<strong>इस गाइड को दूसरी भाषाओं में पढ़ें</strong>
</summary>
<ul>
  <li><a href="./README.md">English</a></li>
  <li><a href="./README-CN.md">中文</a></li>
  <li><a href="./README-RU.md">русский</a></li>
  <li><a href="./README-RO.md">Românesc</a></li>
  <li><a href="./README-IT.md">Italiano</a></li>
  <li><a href="./README-ES.md">Español</a></li>
  <li><a href="./README-pt-BR.md">Português (BR)</a></li>
  <li><a href="./README-DE.md">Deutsch</a></li>
  <li><a href="./README-GR.md">Ελληνικά</a></li>
  <li><a href="./README-FR.md">Français</a></li>
  <li><a href="./README-KO.md">한국어</a></li>
  <li><a href="./README-JA.md">日本語</a></li>
  <li><a href="./README-MR.md">मराठी</a></li>
  <li><a href="./README-HI.md">हिंदी</a></li>
</ul>
</details>

# नए Open Source Contributors का स्वागत है!

इस गाइड में उन सभी महत्वपूर्ण संसाधनों और कदमों को विस्तार से बताया गया है, जिनकी मदद से आप ओपन सोर्स प्रोजेक्ट में योगदान देना सीख सकते हैं। चाहे आप पहली बार कोड में बदलाव कर रहे हों या कोई छोटा-मोटा बग फिक्स कर रहे हों, यहाँ आपको हर कदम के लिए समझाने वाला विवरण मिलेगा।

> **ध्यान दें:** अगर आप कोई नया या बेहतर संसाधन जानें, तो कृपया इस गाइड में [Pull Request](http://makeapullrequest.com) के माध्यम से जोड़ें।  
> प्रश्न या सुझाव के लिए एक [Issue बनाएं](https://github.com/freeCodeCamp/how-to-contribute-to-open-source/issues)।  

---

## सामग्री की रूपरेखा

1. [ओपन सोर्स में सामान्य योगदान कैसे करें](#1-ओपन-सोर्स-में-सामान्य-योगदान-कैसे-करें)  
2. [GitHub पर सीधे सही मुद्दे कैसे खोजें](#2-github-पर-सीधे-सही-मुद्दे-कैसे-खोजें)  
3. [Mozilla का योगदान तंत्र](#3-mozilla-का-योगदान-तंत्र)  
4. [नए योगदानकर्ताओं के लिए उपयोगी लेख](#4-नए-योगदानकर्ताओं-के-लिए-उपयोगी-लेख)  
5. [संस्करण नियंत्रण (Version Control) कैसे सीखें](#5-संस्करण-नियंत्रण-version-control-कैसे-सीखें)  
6. [ओपन सोर्स से जुड़ी किताबें](#6-ओपन-सोर्स-से-जुड़ी-किताबें)  
7. [योगदान को प्रोत्साहित करने वाले कार्यक्रम](#7-योगदान-को-प्रोत्साहित-करने-वाले-कार्यक्रम)  
8. [लाइसेंस](#8-लाइसेंस)  

---

## 1. ओपन सोर्स में सामान्य योगदान कैसे करें

नीचे महत्वपूर्ण लेख और गाइड हैं, जो बताती हैं कि ओपन सोर्स क्या है, क्यों योगदान करें, और शुरुआत कैसे करें:

- **The Definitive Guide to Contributing to Open Source**  
  एक step-by-step गाइड जो शुरुआत से लेकर Pull Request सबमिट करने तक की प्रक्रिया विस्तार से बताता है। इसमें GitHub workflow, issue चयन, fork-branch-PR लॉजिक्स सभी शामिल हैं।  
  https://www.freecodecamp.org/news/the-definitive-guide-to-contributing-to-open-source-900d5f9f2282/

- **An Introduction to Open Source (DigitalOcean)**  
  ओपन सोर्स का परिचय, मुख्य अवधारणाएँ, लाइसेंसिंग, और समुदाय का महत्व—इन सब पर DigitalOcean की इस ट्यूटोरियल सीरीज़ में चर्चा की गई है।  
  https://www.digitalocean.com/community/tutorial_series/an-introduction-to-open-source

- **Issuehub.io**  
  यह एक वेब टूल है, जहां आप GitHub issues को भाषा, लेबल (label) या अन्य फ़िल्टर के आधार पर खोज सकते हैं। शुरुआती लोगों के लिए “good first issue” जैसी लेबल वाली इश्यूज़ के लिए आदर्श।  
  http://issuehub.io/

- **Code Triage**  
  आपका ईमेल इनबॉक्स उन रिपॉज़िटरीज़ के नए या लोकप्रिय इश्यूज़ से अपडेट रखता है, ताकि आप रोज़ाना छोटे-छोटे योगदान कर सकें और निरंतर अभ्यास बना रहे।  
  https://www.codetriage.com/

- **Awesome for Beginners**  
  GitHub का एक संग्रह, जिसमें उन प्रोजेक्ट्स की लिस्ट है जहाँ शुरुआती योगदानकर्ताओं के लिए अच्छी बग रिपोर्ट्स और टास्क होते हैं। रिपॉज़िटरी में labels का अच्छे से उपयोग किया गया है।  
  https://github.com/MunGell/awesome-for-beginners

- **Open Source Guides**  
  GitHub द्वारा प्रकाशित आधिकारिक गाइड, जो बताती है कि आप कैसे प्रोजेक्ट मैनेज करें, सही कम्युनिकेशन करें, और सकारात्मक समुदाय बनाएं।  
  https://opensource.guide/

- **GitHub Documentation**  
  GitHub के हर फीचर—Issues, Pull Requests, Actions, Projects—को बेहतर तरीके से समझने के लिए आधिकारिक डॉक्यूमेंटेशन।  
  https://docs.github.com/en

- **CSS-Tricks: Open Source Etiquette Guidebook**  
  योगदान करते समय ध्यान रखने योग्य शिष्टाचार (etiquette) जैसे कि respectful communication, issue templates का पालन, और community guidelines।  
  https://css-tricks.com/open-source-etiquette-guidebook/

- **A to Z Resources for Students**  
  कॉलेज के छात्रों के लिए क्यूरेट किया गया संसाधन-लिस्ट, जिसमें विभिन्न कोडिंग भाषाएँ और ओपन सोर्स प्रोजेक्ट्स सीखने के लिंक हैं।  
  https://github.com/dipakkr/A-to-Z-Resources-for-Students

---

## 2. GitHub पर सीधे सही मुद्दे कैसे खोजें

GitHub पर contribution शुरू करने के लिए “good first issue” जैसे लैबेल वाले इश्यूज़ सबसे उपयुक्त होते हैं। नीचे कुछ सर्च क्वेरीज दी गई हैं, जिन्हें कॉपी-पेस्ट करके इस्तेमाल करें:

- **बिगिनर लेबल वाले मुद्दे:**  
  ```
  is:issue is:open label:beginner
  ```
- **“good first issue” वाले:**  
  ```
  is:issue is:open label:"good first issue"
  ```
- **“first-timers-only” वाले:**  
  ```
  is:issue is:open label:first-timers-only
  ```
- **“up-for-grabs” वाले प्रोजेक्ट्स:**  
  ```
  is:issue is:open label:up-for-grabs
  ```
- **“starter” या “easy” टैग वाले:**  
  ```
  is:issue is:open label:easy
  ```
---

## 3. Mozilla का योगदान तंत्र

Mozilla समुदाय नए योगदानकर्ताओं का बहुत स्वागत करता है। इनके पास विशेष प्लेटफ़ॉर्म हैं जहाँ आप सीखें, सवाल पूछें और बग फिक्स करें:

- **Good First Bugs**  
  Bugs जिन्हें “Good First Bug” के तहत टैग किया गया है। छोटे-छोटे बग होते हैं जिन्हें डिबग करने से आपको Mozilla के कोडबेस का परिचय मिलेगा।  
  https://bugzilla.mozilla.org/buglist.cgi?quicksearch=sw:%22%5Bgood%20first%20bug%5D%22&limit=0

- **Mentored Bugs**  
  ऐसे बग जहां एक मेंटर उपलब्ध रहता है—आप उसे IRC या अन्य चैनल पर प्रश्न पूछ सकते हैं, जब तक कि आप फिक्स तक न पहुँचें।  
  https://bugzilla.mozilla.org/buglist.cgi?quicksearch=mentor:%40

- **Bugs Ahoy**  
  एक बाहरी टूल जो Bugzilla के बग लिस्ट को और बेहतर फ़िल्टर और सर्च करने का तरीका देता है।  
  https://www.joshmatthews.net/bugsahoy/

- **Firefox DevTools**  
  Firefox Developer Tools से संबंधित बग और इश्यूज़, जिन्हें सुधारकर आप डेवलपर टूलिंग बेहतर बनाने में मदद कर सकते हैं।  
  http://firefox-dev.tools/

- **Start Mozilla Twitter**  
  ट्विटर अकाउंट जहां नए इश्यूज़ और contribution अवसरों की जानकारी शेयर की जाती है।  
  https://twitter.com/StartMozilla

---

## 4. नए योगदानकर्ताओं के लिए उपयोगी लेख

1. **पहला प्रोजेक्ट चुनने की टिप्स**  
   GitHub की curated कलेक्शन जहां बताया गया है कि अपने इंटरस्ट के अनुसार सही प्रोजेक्ट कैसे चुनें।  
   https://github.com/collections/choosing-projects

2. **पहला बग कैसे ढूंढें**  
   FreeCodeCamp का आलेख, जिसमें बता जाता है कि किस तरह से आप अपना पहला बग खोजें और उस पर काम करें।  
   https://www.freecodecamp.org/news/finding-your-first-open-source-project-or-bug-to-work-on-1712f651e5ba/

3. **5 मिनट में पहला योगदान**  
   Roshan Jossey द्वारा लिखा गया आसान गाइड, जहाँ एक बहुत छोटा बदलाव करके आप Contributors लिस्ट में अपना नाम जोड़ सकते हैं।  
   https://www.freecodecamp.org/news/how-to-make-your-first-open-source-contribution-in-just-5-minutes-aaad1fc59c9a/

4. **Hacktoberfest गाइड**  
   अक्टूबर में होने वाले Hacktoberfest इवेंट के दौरान कैसे आप मुफ़्त टी-शर्ट और स्टिकर जीत सकते हैं—even अगर आप बिलकुल नए हैं।  
   https://www.freecodecamp.org/news/hacktoberfest-2018-how-you-can-get-your-free-shirt-even-if-youre-new-to-coding-96080dd0b01b/

5. **Markdown मास्टरी**  
   GitHub पर अच्छी प्रेज़ेंटेशन के लिए Markdown syntax सीखें—बेटी, हीडिंग, कोड ब्लॉक, लिंक, और टेबल।  
   https://docs.github.com/features/mastering-markdown/

6. **GitHub Workflow वीडियो**  
   Egghead.io का वीडियो कोर्स, जिसमें GitHub पर प्रोजेक्ट fork, ब्रांच, PR, merge की पूरी प्रक्रिया स्क्रीनकास्ट के साथ समझाई गई है।  
   https://egghead.io/courses/how-to-contribute-to-an-open-source-project-on-github

---

## 5. संस्करण नियंत्रण (Version Control) कैसे सीखें

**Git** सीखना आपके लिए बेहद ज़रूरी है। नीचे कुछ बेहतरीन संसाधन हैं:

- **Try Git (15 मिनट में)**  
  GitHub की ऑफिशियल Quickstart, जहां ब्राउज़र में इंटरेक्टिव तरीके से git commands का अभ्यास होता है।  
  https://docs.github.com/en/get-started/quickstart/set-up-git

- **Pro Git (किताब)**  
  Git का पूरी तरह से विवरण देने वाली मुफ्त PDF बाज़ार, जिसे Scott Chacon और Ben Straub ने लिखा है।  
  https://git-scm.com/book/en/v2

- **Oh Shit, Git!**  
  आम गिट त्रुटियों (mistakes) से कैसे उबरा जाए—साधारण भाषा में समझाया गया समाधान।  
  https://ohshitgit.com/

- **Atlassian Git Tutorials**  
  Atlassian द्वारा बनाए गए चरण-दर-चरण गाइड्स, जो अलग-अलग git workflows कवर करते हैं।  
  https://www.atlassian.com/git/tutorials

- **Git Flight Rules**  
  गिट उपयोग करते समय अगर कुछ बहुत गड़बड़ हो जाए तो तुरंत क्या करें, इसकी लिस्ट।  
  https://github.com/k88hudson/git-flight-rules

- **Learn Git Branching**  
  इंटरेक्टिव विज़ुअल टूल, जहाँ आप ब्रांच, merge, rebase आदि operations ग्राफिकली देख सकते हैं।  
  https://learngitbranching.js.org/

---

## 6. ओपन सोर्स से जुड़ी किताबें

- **Producing Open Source Software**  
  Open Source डेवलपमेंट के मानवीय पहलुओं पर केंद्रित, बताता है कि सफल परियोजनाएं कैसे चलती हैं।  
  https://producingoss.com/

- **The Architecture of Open Source Applications**  
  ओपन सोर्स एप्लिकेशन के आर्किटेक्चरल डिजाइनों के केस स्टडीज़।  
  http://www.aosabook.org/en/git.html

- **Open Sources: Voices from the Open Source Revolution**  
  लिनस टॉर्वाल्ड्स, लैरी वॉल, रिचर्ड स्टैलमैन जैसे अग्रदूतों के निबंधों का संग्रह।  
  https://www.oreilly.com/openbook/opensources/book/

---

## 7. योगदान को प्रोत्साहित करने वाले कार्यक्रम

- **First Contributions**  
  नए योगदानकर्ताओं के लिए 5 मिनट में स्ट्रक्चर्ड ट्यूटोरियल, जहां आप PR सबमिट करना सीखते हैं।  
  https://firstcontributions.github.io/

- **Hacktoberfest**  
  हर अक्टूबर में GitHub और DigitalOcean द्वारा आयोजित, चार Pull Request सबमिट पर फ़्री गिफ्ट्स।  
  https://hacktoberfest.digitalocean.com/

- **24 Pull Requests**  
  दिसंबर में हर दिन एक PR सब्मिट करके योगदान बढ़ाने की पहल।  
  https://24pullrequests.com

- **Up For Grabs**  
  शुरुआती लोगों के लिए curated प्रोजेक्ट्स की लिस्ट, जहाँ इन्हें labels “up-for-grabs” के साथ मार्क किया जाता है।  
  https://up-for-grabs.net/

- **First Timers Only**  
  केवल पहले समय वाले योगदानकर्ताओं के लिए निर्धारित issues, सरल और स्वागतयोग्य।  
  https://www.firsttimersonly.com/

---

## 8. लाइसेंस

<a rel="license" href="https://creativecommons.org/licenses/by-sa/4.0/">
  <img alt="Creative Commons License" style="border-width:0" src="https://licensebuttons.net/l/by-sa/4.0/88x31.png"/>
</a><br/>
यह काम **Creative Commons Attribution-ShareAlike 4.0 International License** के तहत लाइसेंस प्राप्त है। आप इसे कॉपी कर सकते हैं, बदल सकते हैं और साझा कर सकते हैं, बशर्ते आप मूल रचनाकारों को श्रेय दें और समान लाइसेंस में ही प्रसारित करें।
