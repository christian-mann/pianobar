/*
Copyright (c) 2008 Lars-Dominik Braun

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _CRYPT_KEY_INPUT_H
#define _CRYPT_KEY_INPUT_H

/* decryption key for audio urls; maybe a bit (is) wrong? */

const unsigned int in_key_n = 16;

static const unsigned long in_key_p [16 + 2] = {
		0x88E1FF58L, 0x1CE7B555L, 0x088E6610L, 0x0E94C67AL,
		0xA92659B4L, 0xFB918B2FL, 0xC14D99B0L, 0xEB896558L,
		0x89094AFDL, 0x5A9A7F46L, 0x096B4681L, 0x188217E1L,
		0x9F5ABDB5L, 0x92417158L, 0xC6A3D99FL, 0x1D88F77FL,
		0xC55C3902L, 0x28B1208FL
		};

static const unsigned long in_key_s [4][256] = {{
		0x7EE0C190L, 0xDC665057L, 0x21ED79A5L, 0xDF17ECF5L,
		0xCEB3BCEAL, 0x7FFA7199L, 0xF9E20030L, 0xCCEA2C91L,
		0xEF65ACEEL, 0x809AA7C2L, 0x22C1AA82L, 0x17F1E1ECL,
		0xB7246C6EL, 0xF30F73FDL, 0xDADAE455L, 0x9DE98F6BL,
		0x9D65338BL, 0x7B76A75CL, 0xF384DEE7L, 0xD3D3A767L,
		0x4388D000L, 0xCCDE6385L, 0x94720744L, 0xC8E43ED6L,
		0x5DCDB68FL, 0x81A60C10L, 0x8E978AA7L, 0xC0E9DC47L,
		0x004D5446L, 0x09E2CE79L, 0xC07185F0L, 0x2C55CBAEL,
		0xB2F8CA2DL, 0x038E1554L, 0x901C956DL, 0xBB539B5EL,
		0xCC4D923CL, 0x37A9F19BL, 0xD7693696L, 0xD7B53FE4L,
		0x8CB3C36AL, 0x644D83D9L, 0x56A49080L, 0xCE00E0B4L,
		0x346894ECL, 0x1395568EL, 0x879E91D2L, 0x4BD1A5D4L,
		0x950DD88BL, 0x2CA5F377L, 0xE83F2E47L, 0xF3AA4A01L,
		0x29020BD7L, 0x9335E225L, 0xE087A64EL, 0xCDBA90DCL,
		0x6890E710L, 0x8BBF4FCBL, 0x4909CEE0L, 0x9DA5D242L,
		0xFADA63EEL, 0x019C0DCAL, 0x9AC6ED32L, 0xE7E569A0L,
		0xA8A8B399L, 0x7FF22665L, 0x9B389FAAL, 0x3431E77AL,
		0xE1E6A0F4L, 0xDD26DBFEL, 0x199E7F78L, 0x945DBCEAL,
		0x9015612DL, 0x7A9BCCA2L, 0x1E9DF1BEL, 0x9B8BE8A7L,
		0xE77BBC44L, 0x30713FF8L, 0x92FA1C9DL, 0xCF5E18FBL,
		0xDEDF794EL, 0x29DE6128L, 0x3DBC18B7L, 0xFDEFDA15L,
		0xEAA3E256L, 0xFBF914A2L, 0xB5E41182L, 0xA31CCFC1L,
		0xB3C9E955L, 0x8F134926L, 0x8090E59CL, 0xC587B3E8L,
		0x7A4A3E66L, 0x0121EADDL, 0x86F1949CL, 0xC40E82A8L,
		0x7A724031L, 0xDE95117EL, 0x1D4DBE95L, 0x828B24B7L,
		0x8008982FL, 0xDCD54363L, 0xBA6FF9E4L, 0xB1A607A7L,
		0x60345D59L, 0xDA322EF8L, 0x3A71452CL, 0xEC8ABDC1L,
		0xC472D6EEL, 0x08D24F62L, 0x0E86D5A4L, 0x6F0C6961L,
		0x5686FA76L, 0x73763AE1L, 0x4CD07CE5L, 0x8AC37E6CL,
		0x9160B587L, 0xFA2DD175L, 0x7389A953L, 0x984ACC8DL,
		0x00E83B39L, 0xD84CE900L, 0xD14450F3L, 0x58C2784DL,
		0x76B28201L, 0xF995F6DDL, 0x0D6B53BFL, 0x7AEE721FL,
		0x951FB278L, 0x93D95094L, 0x21D6FD11L, 0x3DC67332L,
		0xED4EFD1FL, 0x3676FE8EL, 0xB6B047B6L, 0x6C81051EL,
		0x0F290E0EL, 0x4EFBB1FCL, 0xAD65999AL, 0x95B9EE7BL,
		0x663C0BE0L, 0xBE1CBC01L, 0xD4A1CBA0L, 0xD3FBFEECL,
		0x86DC8766L, 0x295779B9L, 0x418F5CECL, 0xDAE0128EL,
		0x9D41DF07L, 0xC4A958D7L, 0x5BB03593L, 0x4B9B74C9L,
		0x0C091B52L, 0xB67768CAL, 0x234BD82CL, 0xDB4A0F77L,
		0x75DBE325L, 0x0CB4FE6BL, 0x57CEA66EL, 0x2715C5B5L,
		0x898D8D83L, 0x41BB66D6L, 0x49038105L, 0xB1467011L,
		0x9A396562L, 0xE8434AB3L, 0x93AE50A4L, 0xEA696D74L,
		0xA93FB23BL, 0x8945F81EL, 0x8A3992EAL, 0xEE1DEC03L,
		0x96E6EE36L, 0x448A947AL, 0x7E7EACE0L, 0xCC801587L,
		0x42FE2C19L, 0xE9941978L, 0xB9965323L, 0x21F052D7L,
		0x340CC2F5L, 0x3C01B56FL, 0x8C93ACEFL, 0x65B19EDCL,
		0xDF74E2C3L, 0xAAF3D589L, 0xC653557CL, 0x398FE6C2L,
		0xFA9128C4L, 0x44CDF991L, 0xF8EECEBAL, 0x956282AAL,
		0xD1F2CBA7L, 0xA86DB079L, 0xB16184ECL, 0xC97C5EB2L,
		0xF9CE4D57L, 0xB6D64E1CL, 0x773897A9L, 0x5F22A15BL,
		0x0291B038L, 0xEC1633EFL, 0xB24B284EL, 0x9E0AD0F1L,
		0x1E01E74DL, 0xC8ECDE27L, 0xF5FC6315L, 0xCF6C8FCEL,
		0x632B2739L, 0xF1BF1A04L, 0xB6464205L, 0x5A90232BL,
		0xF34A4610L, 0xD085D0F9L, 0xF3A5288FL, 0x71494091L,
		0x58366AEFL, 0x2CF2FE04L, 0x8ABE96C5L, 0x0159FF21L,
		0x3747ABA1L, 0x7B971604L, 0x57E8BD33L, 0x9D467055L,
		0x6B983E61L, 0x38DC9B4CL, 0xCA19A7FEL, 0x459CEFB7L,
		0x05AFDB02L, 0x26AC1612L, 0xD3596DB6L, 0xFDC67B41L,
		0xCF32CAEDL, 0xFD2DE053L, 0x657FD523L, 0x98146A9DL,
		0xEF5AF784L, 0xAA4BE0A9L, 0x2B99705BL, 0x3DAC683FL,
		0x0B4B5106L, 0x2A230C24L, 0x91F4E50DL, 0xDEDC78D8L,
		0x80A37563L, 0x103CAA22L, 0x795E3147L, 0xEDD05C77L,
		0x32A1D11BL, 0x7E3DA3E3L, 0xFC994749L, 0x4457A98BL,
		0xF8390ED2L, 0xBE8D4892L, 0xBE9D11C1L, 0x37878A40L
		},{
		0xD37C7394L, 0x83CEC330L, 0x7C92AA74L, 0x62AC3182L,
		0x7A6A440DL, 0x59F00659L, 0x5C3D020BL, 0x1A8039F5L,
		0x5748A154L, 0x4EE5FB97L, 0x7C13CCBAL, 0x7CEF6337L,
		0x748110EBL, 0x97DDD59BL, 0x031103DAL, 0xD354CA08L,
		0xE20C41B5L, 0x77E8D910L, 0x23F66D99L, 0xF34EF257L,
		0xC1A130B1L, 0x76F95E59L, 0x15EE8DBCL, 0x02B32208L,
		0xF9D25263L, 0xD43A0983L, 0x839CE370L, 0x12E50B9CL,
		0x39FFC6B1L, 0x714FC23CL, 0xD645D778L, 0x8D6EE6D8L,
		0xDFCD83F7L, 0x4A7C1EB7L, 0x49AEDDE3L, 0x3BD664ECL,
		0x5E6B49F5L, 0x71F57BBEL, 0xF7456CDAL, 0xF5666F28L,
		0x1BB520F1L, 0x036A84B4L, 0xF0707CC8L, 0xC658944AL,
		0x1396A9CCL, 0x93729122L, 0x271DEDD9L, 0xC6844342L,
		0x571534FBL, 0xF74D36A3L, 0x173B476DL, 0x09FEC3D7L,
		0x1BBC4AE4L, 0xC8A9B59FL, 0x532224FAL, 0xB6A65578L,
		0x2306C5FCL, 0x3D3C21A0L, 0x421EB6E9L, 0x709057D2L,
		0x98589BD6L, 0x4C053501L, 0xEBD90ABAL, 0x7A0C919CL,
		0xB6E7749CL, 0x7EA16CD9L, 0x70A7E677L, 0x04B2D9ADL,
		0x1FB3B875L, 0x338ED938L, 0xECFEA14BL, 0x20CBF534L,
		0xD93F39BDL, 0x39707929L, 0xA2F4B22FL, 0xA975294CL,
		0xC1276B08L, 0x13A71759L, 0x8D22A575L, 0x1F0A0770L,
		0xF6DEF164L, 0x36B917E2L, 0xB8ECB579L, 0xA1F276CFL,
		0x23CCDFB5L, 0x95D18F19L, 0x90FB3BBEL, 0x48E428E3L,
		0x861E59CFL, 0x742700AFL, 0xC4E6AAD6L, 0xF1203226L,
		0xDECB2A5BL, 0x6C642C23L, 0x3C2B6DC7L, 0xD9555682L,
		0xC22B5303L, 0x4465336EL, 0xF4D1B9AEL, 0xAAB521BFL,
		0x14350C7FL, 0x533B4DB5L, 0x074747DFL, 0x6A6FFC55L,
		0x684E6EEFL, 0x021FAFB8L, 0x0DADE9EFL, 0x66DDB850L,
		0xE4268FE1L, 0x8ACE07ABL, 0x6358E4FCL, 0x833BD173L,
		0x7E232CF9L, 0xA0B1D48CL, 0xA3F6496CL, 0x9270A61DL,
		0x82F2A230L, 0xEC7ED778L, 0xC51146DBL, 0x4C13E68FL,
		0x8912CB96L, 0x92F98979L, 0x0FEF17C1L, 0xFFFF77ABL,
		0x2275ED18L, 0x7C6DEDD9L, 0x328F7A26L, 0x6102498DL,
		0x15D49153L, 0xF66D9703L, 0x990D294FL, 0x428987F1L,
		0x5EEE6CD6L, 0x43A9FF6FL, 0xF3160EF0L, 0x34A931B4L,
		0x72B00EC8L, 0x2910FF48L, 0x3137AD25L, 0xE0D1854EL,
		0x0ACDED1AL, 0xB2ED9F96L, 0xBCA16090L, 0xD2A64E20L,
		0x2E2AFAB2L, 0x469FFEFCL, 0x4B9351CCL, 0x1A154749L,
		0xDF15108EL, 0x7A33C77DL, 0x6035A1BAL, 0x09B8655AL,
		0x688B72E6L, 0x071E22C7L, 0x632E5E83L, 0x4CF66B7EL,
		0x516CF856L, 0x4C6065B7L, 0x1FDA80AAL, 0x90729C4BL,
		0x2DAF7332L, 0x3DC1BFA9L, 0xE76AD571L, 0xF2C4CC71L,
		0x7E6A130CL, 0x99B0EE11L, 0xD24D1D03L, 0xB3F8C81FL,
		0x956F48F2L, 0xA42B89C9L, 0x4D9F7BEBL, 0xCEEA78E9L,
		0xCF811679L, 0x42384F79L, 0xD58220FFL, 0xEABA4233L,
		0x6D67F687L, 0x06CE779CL, 0x2E866320L, 0x5E80FAC7L,
		0xA17DD1E6L, 0x004729E8L, 0x76389889L, 0x67D28A43L,
		0xD4E48F9EL, 0xF7EBB00EL, 0x88FCDD72L, 0xCD4F955FL,
		0x6224FC05L, 0xF76033F2L, 0xAE2D8154L, 0x5EDD6DB0L,
		0x9515F7EEL, 0x89864192L, 0x9438C1BEL, 0xF69E8C51L,
		0xC2919C59L, 0x24D30BD9L, 0x234D9F21L, 0xB049745FL,
		0x6688F019L, 0x4C7305FAL, 0xED262277L, 0xBF51C570L,
		0xD1B2F779L, 0x57B9073BL, 0xDC81E4DAL, 0xB376D7C6L,
		0x440C3EC4L, 0xBA45520DL, 0x65CE709DL, 0x0579BAFCL,
		0xB7945132L, 0x4FABD6B8L, 0x22EA9C1BL, 0x400F137DL,
		0xC7DD6E7FL, 0xB1E8C963L, 0xD2F46CA7L, 0x814711E8L,
		0xE216A980L, 0xAE1925D4L, 0x39757828L, 0x333B2095L,
		0x4CA4B7CEL, 0x60EE4807L, 0x475732D0L, 0xC186AF70L,
		0x7C56965DL, 0x6C56C8CEL, 0x7251BBCCL, 0x727CED7EL,
		0x0F4797CEL, 0x2E897DD6L, 0x0CBBA5D2L, 0xD571294AL,
		0x6A54C859L, 0xD5E4C39DL, 0xEF34B87BL, 0x58647032L,
		0x047820FFL, 0x21522E78L, 0x93355EF3L, 0xABADDF05L,
		0x418D1736L, 0x3A80C715L, 0xEDE25907L, 0x2D361FA5L,
		0x9739A125L, 0x78AF5AEFL, 0x478D9D81L, 0x71CAE5BCL,
		0x4DA61F60L, 0x4A85774BL, 0x62E39C58L, 0x4CC1EDCCL
		}, {
		0xD3D95780L, 0x304DF7B4L, 0x097720F1L, 0x07D3501BL,
		0x9A94DBECL, 0x3B10447DL, 0x053F63B1L, 0xC02A3669L,
		0xC58F5B70L, 0x3A4CB8CDL, 0x09D2A647L, 0x42EE5DC7L,
		0xEB5CBDE2L, 0x34BFB5BEL, 0x38E08F9FL, 0x737BC521L,
		0xBD647DC0L, 0xD13D4823L, 0x985AEAC3L, 0x7CE18C79L,
		0x7BE5C00BL, 0x85EED512L, 0xC267C7BBL, 0xBA58F6B9L,
		0x8091245CL, 0xBC945B6AL, 0xAB1F0AB9L, 0x2F4DAF05L,
		0x64A349F3L, 0x1E8C2EA3L, 0x7B517A67L, 0x3FBF9331L,
		0x7F8E7446L, 0xD873937AL, 0xF5881626L, 0xEA9FD9AFL,
		0x75379BE3L, 0xC2EEE5FFL, 0x4CB952CAL, 0x94F5D238L,
		0x4E3E9C14L, 0x30FAFD36L, 0xAAC38DB8L, 0x788906B6L,
		0x50467458L, 0xEBF4A9EBL, 0xACC15636L, 0x88A19747L,
		0x1A444317L, 0x5749A028L, 0x88CC0F4BL, 0x86466508L,
		0x1D4056CFL, 0x11FA26D1L, 0x43E683AAL, 0xA7E75447L,
		0x5D37DFD8L, 0x0233E664L, 0xCEE5EBF6L, 0xF48F0AA0L,
		0xA350B974L, 0x438D563BL, 0x31231095L, 0x12C84980L,
		0xD594996FL, 0x5F43B929L, 0x97ECE139L, 0x24E354A2L,
		0xF037D7E5L, 0x372FBB6DL, 0xF5DEB0C2L, 0x56A1CC9BL,
		0xDBA3A62BL, 0xF8999775L, 0xF51C9BC0L, 0xE8551CFEL,
		0xD17FD45BL, 0xBB9084F1L, 0x294FD01DL, 0x6BAF17F9L,
		0x62EBF7BBL, 0x8AE1685FL, 0xFF81A190L, 0xF879BEA1L,
		0xDEA50EFEL, 0x49ACDA4DL, 0x4A3B2C06L, 0x8BDC31DCL,
		0x24522F01L, 0x0F1D509BL, 0xDEF2C99BL, 0xBF1884C8L,
		0x69189B6CL, 0x44D494BCL, 0x6177EE4BL, 0x06585E64L,
		0x49C884FBL, 0xEC132D3BL, 0x4B0C9C29L, 0x4F04936AL,
		0x174055F5L, 0x78120821L, 0x4E1F132CL, 0xA57E482BL,
		0x91C373DDL, 0x50C0E21AL, 0x4596E2D2L, 0x90D59A08L,
		0xE14CED85L, 0x70D6D4FEL, 0x8AE3332BL, 0x471E2381L,
		0x59F26072L, 0xBBF0E131L, 0x53BD38A9L, 0xF8F74654L,
		0xAF703FE3L, 0xBB9F1DBEL, 0xC79F5D26L, 0x38429A47L,
		0x9054053CL, 0x339CB94CL, 0xE8EBBE52L, 0x5D9DEB12L,
		0x57D6A0FCL, 0x3CFF2B73L, 0x2B429335L, 0xCC2B6C2AL,
		0x9B64878BL, 0x8609FDD0L, 0x2C1AE184L, 0x72C73F10L,
		0xBF94C62EL, 0x6DBBE9C3L, 0xF6DD058DL, 0xFAF092CEL,
		0xBBE66537L, 0xDA92B927L, 0xFF2C0B6DL, 0xD8A56BE3L,
		0x385FE7F5L, 0x98B434E1L, 0x490C552EL, 0xC519389AL,
		0xCB3A33F1L, 0x5F3FAC14L, 0xE45B476EL, 0x6750DD73L,
		0x378F0392L, 0xB7BD1F8BL, 0x54CA6888L, 0xA4E34198L,
		0x30DA40D5L, 0xC4004385L, 0x4958A425L, 0x28930A3BL,
		0x3A476494L, 0xA233CD72L, 0x1A43BED1L, 0xBF2EC0AAL,
		0x435E6F00L, 0x9A3C522CL, 0x98C54FC1L, 0x289D824EL,
		0xF54C164AL, 0x422BF0EEL, 0xBC49B12FL, 0x265C449FL,
		0x06919396L, 0xA9145050L, 0x58B2E339L, 0xF299A2B3L,
		0xB2523C1CL, 0xF58B4712L, 0x38816085L, 0xB951FB44L,
		0x3585C0F5L, 0x0A1CDEADL, 0x2BBD1CD4L, 0x7624114AL,
		0x47D2E912L, 0x165C9C04L, 0xA7879408L, 0x85E9544BL,
		0xA77565A4L, 0x3ED34509L, 0xC772AAEFL, 0xEB0E17D3L,
		0xA2A0B790L, 0x3258F1F8L, 0xA8298D03L, 0x361EB680L,
		0xA1D5E6F9L, 0xE28BF9A8L, 0x6684001EL, 0x80759238L,
		0xA17F96C1L, 0x738D155DL, 0x7E052CD0L, 0x1BC7EDC6L,
		0x8FA3E733L, 0x78BB8F5DL, 0x50228BF6L, 0xD7A153CDL,
		0x30C147EBL, 0x74882AC4L, 0xA99B432EL, 0xDF3BEDD2L,
		0x9CE4FEF3L, 0x4AF771A2L, 0x79A2F8D2L, 0xA16DF1F4L,
		0x206BF9AFL, 0x58B87AC4L, 0x116D44C5L, 0x1D529950L,
		0x7AA6DBA0L, 0xCAA942F6L, 0x714A9F37L, 0xD74DB0B0L,
		0x766F4740L, 0xD4A3AF5EL, 0x345CCA3BL, 0x5F9BEAFBL,
		0x462040C1L, 0x87DBC680L, 0x6834B2B5L, 0x1219731AL,
		0xA5D35112L, 0x1E2AE6B3L, 0x604141D3L, 0xA6F4AD73L,
		0x47A6FC27L, 0x511F0F6CL, 0xE2A26ED9L, 0x3469774BL,
		0xAB23F073L, 0x8BF8EDF2L, 0xC0BFF738L, 0xC55C4F77L,
		0x6D906844L, 0x2076E478L, 0x758C5A86L, 0xE0730FEDL,
		0xCE82B2D5L, 0xA8F864A2L, 0xEFC59775L, 0xDDACC27DL,
		0xB5E4AB2AL, 0x62DA2117L, 0xCAE7FDB3L, 0x987DD6CBL,
		0x17F045A4L, 0xF7D78F8AL, 0xBE40EE03L, 0xE87F2B0FL
		}, {
		0xAD44FF0DL, 0xC15C210EL, 0xE5006A9CL, 0xF900E985L,
		0xBA7D6647L, 0x17339926L, 0x5576752DL, 0xC116946CL,
		0xA72C0DF0L, 0x41492492L, 0xFE2FE6ADL, 0x1DD57369L,
		0x13141BC3L, 0xCD8C6C6EL, 0x05395537L, 0x498B1813L,
		0xE27429DAL, 0x32A2F8A6L, 0xD9D98C74L, 0x668E7B91L,
		0x47C7FB70L, 0xD412F512L, 0x6E6E28F4L, 0xB24BA275L,
		0x2A7CE14AL, 0x1E89CD98L, 0x83B319ABL, 0x8DE70898L,
		0x7ADCEAD7L, 0x46C68710L, 0xF7A6EA45L, 0xF1E0040FL,
		0x8C0A0EC2L, 0x97B40BDAL, 0x69D7C066L, 0x9A75CA19L,
		0x84E3C558L, 0xF1DC8CEBL, 0x0215CFC5L, 0x784D8E73L,
		0xB5E9C22FL, 0x7D232C89L, 0x074842C8L, 0xD777E873L,
		0x3C4426ABL, 0xA1609639L, 0xA1915B9DL, 0x5A8E7F32L,
		0x11B47080L, 0x14DFA5AEL, 0x1E75ECADL, 0x420B0B05L,
		0xB8DED0AAL, 0xEC9BF32EL, 0x3B6D500EL, 0x6458E0D4L,
		0x575D7705L, 0x15609525L, 0xFBB2E66DL, 0x10074F41L,
		0x26E8A2D2L, 0xD120D7A7L, 0x18B628E3L, 0xC57C4AA1L,
		0x9B4C3499L, 0x4CFDF313L, 0x7FAE8409L, 0xA2F0F5E6L,
		0xC2D6AD07L, 0x637B8820L, 0xB67D51B9L, 0xACB53137L,
		0xC361F802L, 0x0D015E82L, 0x20E5050EL, 0x9E095D35L,
		0x4DBEBF6BL, 0x63AA5696L, 0x4A918EA3L, 0x036C5456L,
		0x5FE4656EL, 0x47048DA6L, 0x35EA26D9L, 0x2673CDAAL,
		0xB89AC3CAL, 0xAE4C0632L, 0x247A1FF9L, 0x88B3BDE4L,
		0x794081C8L, 0x3ACFB852L, 0x2C35C8D0L, 0xDE1FC725L,
		0x53A46D2EL, 0x24C2853AL, 0xC44657A1L, 0x674FCB0EL,
		0xEB14117AL, 0x353382B9L, 0x5F8A9F33L, 0x7A7D6B5DL,
		0x42D3C390L, 0x5CA83F4AL, 0x755FC604L, 0x60FA14DDL,
		0x0F37EC6DL, 0x274BF918L, 0x18A84159L, 0xC80269ACL,
		0x32DDDFD3L, 0x72AC2F05L, 0x71F03689L, 0x107317CAL,
		0xF505ACC9L, 0xE1A7207FL, 0x701A92A0L, 0x6D5921C8L,
		0xBDDE32DFL, 0xF51EADCAL, 0x71D7B6D6L, 0x35C0FD0DL,
		0x657B5539L, 0x37796A79L, 0x207060CFL, 0x724A2652L,
		0xD52B9C4BL, 0x89E6B875L, 0xBF5354ECL, 0x404C0020L,
		0x892226B2L, 0x1D19478AL, 0x3241786AL, 0x705EC84FL,
		0x9E90FB06L, 0x9498CC5EL, 0xE797C92CL, 0xD65C4DB3L,
		0xF3DC0E84L, 0x01152FA0L, 0xA9FBBAB7L, 0x7B33D4D4L,
		0xE144C4A7L, 0x61AF6B12L, 0x47B4E21CL, 0xBF2D99F1L,
		0xE4D356FCL, 0x3B268633L, 0x606F0E85L, 0xC2FBD483L,
		0x7653514DL, 0x5EBF2BEEL, 0x0388C59BL, 0x83376C93L,
		0x6B75DB71L, 0x5AE0DA51L, 0x6081FA07L, 0xFEF41DC7L,
		0x6154C9E1L, 0x369F786EL, 0x76815368L, 0x40D33860L,
		0x13953873L, 0x29B29043L, 0x2CD69BC7L, 0x9A94FD98L,
		0x7A7284D5L, 0x0D61C5D4L, 0x73779D49L, 0xF9044B57L,
		0xDB042D6EL, 0x83411FF6L, 0x631E2ABAL, 0x19BFA503L,
		0xC27F3E42L, 0x5A30CB31L, 0xD688D8DBL, 0x636907DFL,
		0xF9FE43C5L, 0xAD07F822L, 0x5B08719EL, 0x8A779280L,
		0xDBC15828L, 0x6DECD7B9L, 0x0E0187C7L, 0xD6B0119AL,
		0xD60B22C2L, 0x4A444764L, 0x762EEBFBL, 0xBFC730CDL,
		0x8B614F18L, 0x4692E84AL, 0x28E8700CL, 0xA8DE8BE8L,
		0xD97DCC14L, 0xC7D45234L, 0x93674996L, 0xAB7D5FE8L,
		0xF5693F39L, 0x06450C54L, 0xDB841002L, 0x3708ECB6L,
		0x33329E06L, 0xA9CD93D6L, 0x44F8B6F2L, 0x9AD7AD6CL,
		0xDCD139BDL, 0x6495A638L, 0x9B0FEB99L, 0xDD61E62BL,
		0x2F0092C8L, 0xE2AEEB18L, 0x88791DF4L, 0x378294ADL,
		0x93B9D5E0L, 0x382696F7L, 0x7B84C6C0L, 0x5B0C6BE6L,
		0x61B19885L, 0xF2E57EBFL, 0x963A70E0L, 0xA8D322A3L,
		0x97539BD2L, 0x1F351D4FL, 0x05F5A564L, 0x49D160BDL,
		0x21C2E2F3L, 0x4F0B829BL, 0xCD76A6BAL, 0xFE469113L,
		0xA9C0D654L, 0xDC256FD4L, 0x692DAE32L, 0xF38E6DF9L,
		0xD442185FL, 0x6855F1FBL, 0xBE780BF8L, 0x3959E379L,
		0x0DD8B266L, 0xF1A83144L, 0x93AA5A92L, 0xD52BFC17L,
		0xB1917C46L, 0xA4E9E95DL, 0xB97D5CC7L, 0xCC08AA59L,
		0x15552930L, 0x4EB3E543L, 0xA2232733L, 0x55197DE5L,
		0x05F3E9BBL, 0x6AEE9067L, 0x4F685BAAL, 0x26FA2B36L,
		0xCACB175EL, 0x3C3BAADEL, 0xCCF73A4CL, 0xBFFFB8D7L
		}};

#endif /* _CRYPT_KEY_INPUT_H */
