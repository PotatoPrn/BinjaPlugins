#pragma once

std::vector<std::string> DeadCode = {
	// Safe Junk
	/*"4889c0", // mov rax, rax
	"4889c9", // mov rcx, rcx
	"4889d2", // mov rdx, rdx
	"4889db", // mov rbx, rbx
	"4889ed", // mov rbp, rbp
	"4889f6", // mov rsi, rsi
	"4889ff", // mov rdi, rdi*/
	"4889c0", // mov r8, r8
	// "4d89c9", // mov r9, r9
	// "4d89d2", // mov r10, r10
	// "4d89db", // mov r11, r11
	// "4d89e4", // mov r12, r12
	// "4d89ed", // mov r13, r13
	// "4d89f6", // mov r14, r14
	// "4d89ff", // mov r15, 15 // FF is a wild card lol

	// GameGuard
	/* Only 1 Occurance, suspect things between the push and mov instructions are junk?
	 * push r8
	 * mov r8, 0xFFFFFF
	 * mov rdi, r8
	 * push rdi
	 * pop qword [rsp+0x8]
	 * mov rdi, qword [rsp]
	*/
	// "415049b8??????00000000004c89c74158578f442408488b3c24",

	/*
	 * sub rbp, ???
	 * sub rbp, ???
	 * sub rbp, ???
	 * add rbp, ???
	 * add rbp, ???
	 * add rbp, rcx ?? need to look into
	 * sub rbp, ???
	 * sub rbp, ???
	 * add rbp, ???
	 * add rbp, ???
	 * add rbp, ???
	 */
	//"4883c4084881ed????????4881ed????????4881ed????????4881c5????????4881c5????????4801cd4881ed????????4881ed????????4881c5??????"
	// "4881ed????????4881ed????????4881ed????????4881c5????????4881c5????????4801cd4881ed????????4881ed????????4881c5????????"

};
