# 962. Pattern 20

PrepDashboardPrep HubPracticeDSASQLAptitudeQuantitativeLogicalVerbal{try{var el=document.getElementById("_R_ellb4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:dropdown:aptitude");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}{try{var el=document.getElementById("_R_1lb4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:dropdown:practice");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}PlanlyCommunity{try{var el=document.getElementById("_R_b4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:group:prep");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}AdditionalsBlogsUnlockGoodiesGamification{try{var el=document.getElementById("_R_15j4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:dropdown:gift");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}Dev ToolsIDE{try{var el=document.getElementById("_R_1lj4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:dropdown:dev-tools");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}{try{var el=document.getElementById("_R_j4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:group:explore");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}My SpacesNoteSpaceAll ListsCodeSpaceBuganizer{try{var el=document.getElementById("_R_r4inmn9fijb_");var saved=localStorage.getItem("tuf:sidebar:section:v1:group:my_space");if(el&&(saved==='true'||saved==='false')){el.setAttribute('data-sidebar-open',saved);var trigger=el.querySelector(':scope > button');if(trigger)trigger.setAttribute('aria-expanded',saved)}}catch(e){}}MSMdFreeUpgrade
![image](/_next/static/media/logoBO.2g6k124zozf-l.png?dpl=57559f2b-f900-4e91-86a1-50bf4ed5c341)

![image](/_next/static/media/logoWO.2gbeuz1--fwod.png?dpl=57559f2b-f900-4e91-86a1-50bf4ed5c341)

![image](/tufy/tufy-head.svg?dpl=57559f2b-f900-4e91-86a1-50bf4ed5c341)
FindBorderBarSizeProblemCodeProblem

Solution

Submissions

Peer Solutions

962. Pattern 20CompaniesGiven an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

```text
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

```
Print the pattern in the function given to you.

Example 1:**Input**: n = 4

**Output**:

![image](https://static.takeuforward.org/content/1789474095_2DzBmec6.webp)

Example 2:**Input**: n = 2

**Output**:

![image](https://static.takeuforward.org/content/1789474101_UKDICv5G.webp)

Still unsure what the problem is asking ?

 Let’s go through a few more examples, step by step, to make it clearer.

Explain problemConstraints:- 1 Advertisements

43Tab-1C++Push to GitHubSubmit1234567891011121314151617181920class Solution {public:    void pattern20(int n) {        int s = n*2;        int star = 0;        for(int i=0;in;i++){            s = s-2;            star = star+1;            for(int j=0;jstar;j++){                cout  "*";            }            for(int j=0;js;j++){                cout  " ";            }            for(int j=0;jstar;j++){                cout  "*";            }            cout  endl;        }        s=0;Guide Meon next steps based on codeTest CaseSampleHiddenCase 1Case 2Input:

NAcceptedGreat work! You passed all test cases.

Passed 100/100Runtime : 0.057 ms

Memory : 194.86 KiB

Amazing work!

Share your solution to help others learn and grow

ShareGenerate a quick review of your approach, complexity, and interview readiness.

GenerateName your submission and generate notes for revision?

Saved to local — Upgrade to save on CloudProblemCode