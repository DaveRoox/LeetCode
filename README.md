# LeetCode
My solutions to problems from <b><a href="https://leetcode.com">LeetCode</a></b>.

<h2><b>1. Two Sum</b></h2>
<p><p>Given an array of integers, return <b>indices</b> of the two numbers such that they add up to a specific target.</p>
<p>You may assume that each input would have <b><i>exactly</i></b> one solution, and you may not use the <i>same</i> element twice.</p>

<p>
<b>Example:</b><br />
<pre>
Given nums = [2, 7, 11, 15], target = 9,

Because nums[<b>0</b>] + nums[<b>1</b>] = 2 + 7 = 9,
return [<b>0</b>, <b>1</b>].
</pre>
</p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/TwoSum.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>

<b>************************************************************************</b>


<h2><b>2. Add Two Numbers</b></h2>
<p><p>You are given two <b>non-empty</b> linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<p style="font-family:monospace">
<b>Input:</b> (2 -> 4 -> 3) + (5 -> 6 -> 4)<br />
<b>Output:</b> 7 -> 0 -> 8</p></p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/AddTwoNumbers.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>

<b>************************************************************************</b>


<h2><b>3. Longest Substring Without Repeating Characters</b></h2>
<p><p>Given a string, find the length of the <b>longest substring</b> without repeating characters.</p>

<p><b>Examples:</b></p>

<p>Given <code>"abcabcbb"</code>, the answer is <code>"abc"</code>, which the length is 3.</p>

<p>Given <code>"bbbbb"</code>, the answer is <code>"b"</code>, with the length of 1.</p>

<p>Given <code>"pwwkew"</code>, the answer is <code>"wke"</code>, with the length of 3. Note that the answer must be a <b>substring</b>, <code>"pwke"</code> is a <i>subsequence</i> and not a substring.</p></p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/LongestSubstringWithoutRepeatingCharacters.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>
Elapsed time: <b>12 ms</b>. My runtime beats <b>98.47%</b> of cpp submissions.<br>

<b>************************************************************************</b>


<h2><b>230. Kth Smallest Element in a BST</b></h2>
<p><p>Given a binary search tree, write a function <code>kthSmallest</code> to find the <b>k</b>th smallest element in it.</p>

<p><b>Note:</b><br>
You may assume k is always valid, 1 &le; k &le; BST's total elements.</p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/KthSmallestElementInABST.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>

<b>************************************************************************</b>


<h2><b>299. Bulls and Cows</b></h2>
<p>You are playing the following <a href="https://en.wikipedia.org/wiki/Bulls_and_Cows" target="_blank">Bulls and Cows</a> game with your friend: You write down a number and ask your friend to guess what the number is. Each time your friend makes a guess, you provide a hint that indicates how many digits in said guess match your secret number exactly in both digit and position (called "bulls") and how many digits match the secret number but locate in the wrong position (called "cows"). Your friend will use successive guesses and hints to eventually derive the secret number.</p>

<p>
For example:
<pre>
Secret number:  "1807"
Friend's guess: "7810"
</pre>
Hint: <code>1</code> bull and <code>3</code> cows. (The bull is <code>8</code>, the cows are <code>0</code>, <code>1</code> and <code>7</code>.)
</p>

<p>Write a function to return a hint according to the secret number and friend's guess, use <code>A</code> to indicate the bulls and <code>B</code> to indicate the cows. In the above example, your function should return <code>"1A3B"</code>. </p>

<p>Please note that both secret number and friend's guess may contain duplicate digits, for example:
<pre>
Secret number:  "1123"
Friend's guess: "0111"
</pre>
In this case, the 1st <code>1</code> in friend's guess is a bull, the 2nd or 3rd <code>1</code> is a cow, and your function should return <code>"1A1B"</code>.
</p>

<p>You may assume that the secret number and your friend's guess only contain digits, and their lengths are always equal.</p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/BullsAndCows.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>

<b>************************************************************************</b>


<h2><b>476. Number Complement</b></h2>
<p><p>Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.</p>

<p><b>Note:</b><br>
<ol>
<li>The given integer is guaranteed to fit within the range of a 32-bit signed integer.</li>
<li>You could assume no leading zero bit in the integer’s binary representation.</li>
</ol>
</p>

<p><b>Example 1:</b><br />
<pre>
<b>Input:</b> 5
<b>Output:</b> 2
<b>Explanation:</b> The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
</pre>
</p>

<p><b>Example 2:</b><br />
<pre>
<b>Input:</b> 1
<b>Output:</b> 0
<b>Explanation:</b> The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
</pre>
</p></p>

<b><a href="https://github.com/DaveRoox/LeetCode/blob/master/NumberComplement.cpp">&gt;&gt;&gt; Solution &lt;&lt;&lt;</a></b><br>
