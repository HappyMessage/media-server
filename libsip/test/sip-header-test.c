void sip_header_param_test(void);
void sip_uri_parse_test(void);
void sip_header_contact_test(void);
void sip_header_via_test(void);
void sip_header_cseq_test(void);

void sip_header_test(void)
{
	sip_header_param_test();
	sip_uri_parse_test();
	sip_header_contact_test();
	sip_header_via_test();
	sip_header_cseq_test();
}
