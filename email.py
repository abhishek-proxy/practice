import email
a="""Received: from DB3FFO11FD039.protection.gbl (10.47.216.33) by
 DB3FFO11HUB039.protection.gbl (10.47.217.10) with Microsoft SMTP Server (TLS)
 id 15.0.980.11; Fri, 25 Jul 2014 13:00:24 +0000
Received: from mail-vc0-f178.google.com (209.85.220.178) by
 DB3FFO11FD039.mail.protection.outlook.com (10.47.217.70) with Microsoft SMTP
 Server (TLS) id 15.0.980.11 via Frontend Transport; Fri, 25 Jul 2014 13:00:23
 +0000
Received: by mail-vc0-f178.google.com with SMTP id la4so7162743vcb.23
        for <care.jammu@aircel.co.in>; Fri, 25 Jul 2014 06:00:23 -0700 (PDT)
DKIM-Signature: v=1; a=rsa-sha256; c=relaxed/relaxed;
        d=gmail.com; s=20120113;
        h=mime-version:sender:in-reply-to:references:date:message-id:subject
         :from:to:content-type;
        bh=OsbGhSAXSow1fJiKE3fRv01NoDebfs86GpLOH3XwHbQ=;
        b=GCBnbtb9mhRu2Cy9BnIijBSWXJnkzHBuJdWmtnj7guMADOMtBWtlWIQflg+w9oFxc0
         GIY/Q7q7RjSYSnCseOdi7pTn2KExt31uKKZZNAGSPiphIyjYEYHnSm/9bqXEIhHha7kh
         AV2EDNA/dVOj8oGSwJ0dKID9hr1tNDa8Kc5yjVaGmpZX2qRTCoBb/OcESo+/sJuzvJYh
         dcaHEsj1dkLz6zz7FeX0e+Nwl/atxMfp2sNpgBn0qax48rBgeMsf3ucHGaAtG2S/N7Rg
         wXACC6t7z5qSoGqppTs7gzMJvbAgyG2ifhG2O0i9wgdJmPsrbR6uZaVMD1WZHqMHCgsj
         SzrQ==
MIME-Version: 1.0
X-Received: by 10.220.105.201 with SMTP id u9mr20328449vco.11.1406293223066;
 Fri, 25 Jul 2014 06:00:23 -0700 (PDT)
Sender: abhisheksangwan1994@gmail.com
Received: by 10.52.181.225 with HTTP; Fri, 25 Jul 2014 06:00:22 -0700 (PDT)
In-Reply-To: <CAHmotvNXkF6XA8kkguf7bkRJPBDRvG5RPk+wnB-5u3==7Yx0xA@mail.gmail.com>
References: <CAHmotvNXkF6XA8kkguf7bkRJPBDRvG5RPk+wnB-5u3==7Yx0xA@mail.gmail.com>
Date: Fri, 25 Jul 2014 18:30:22 +0530
X-Google-Sender-Auth: gpLLCZGOzG66sIoPsL0unZi6rX8
Message-ID: <CAHmotvOQV2NuhV1fgfbAS3f3Dab--Up-+cgr4qThti906NQdtA@mail.gmail.com>
Subject: Fwd: Bill payment
From: Abhishek Sangwan <abhishek@mally.in>
To: care.jammu@aircel.co.in
Content-Type: multipart/alternative; boundary=047d7b33dd1e02d0b404ff04285e
Return-Path: abhisheksangwan1994@gmail.com
X-EOPAttributedMessage: 0
X-Forefront-Antispam-Report:
	CIP:209.85.220.178;CTRY:US;IPV:NLI;EFV:NLI;SFV:NSPM;SFS:(438002)(2473001)(189002)(22974006)(199002)(377454003)(74502001)(55446002)(61266001)(85852003)(42186005)(59536001)(110136001)(74482001)(2351001)(87572001)(83072002)(107046002)(74662001)(63696999)(21056001)(87836001)(551934003)(85306003)(4396001)(92726001)(31966008)(106466001)(6806004)(99396002)(102836001)(20776003)(77982001)(95666004)(84326002)(54356999)(80022001)(79102001)(64706001)(46102001)(19580405001)(956001)(2361001)(92566001)(50986999)(107886001)(76176999)(76482001)(19580395003)(93516999)(73972005)(71186001)(81542001)(77096002)(81342001)(61726005)(44976005)(57042002)(80872001)(42882001);DIR:INB;SFP:;SCL:1;SRVR:DB3FFO11HUB039;H:mail-vc0-f178.google.com;FPR:;MLV:sfv;PTR:mail-vc0-f178.google.com;MX:1;A:1;LANG:en;
X-Microsoft-Antispam: BCL:0;PCL:0;RULEID:
Received-SPF: Pass (: domain of gmail.com designates 209.85.220.178 as
 permitted sender) receiver=; client-ip=209.85.220.178;
 helo=mail-vc0-f178.google.com;
Authentication-Results: spf=pass (sender IP is 209.85.220.178)
 smtp.mailfrom=abhisheksangwan1994@gmail.com; """
 

b = email.message_from_string(a)
if b.is_multipart():
    for payload in b.get_payload():
        # if payload.is_multipart(): ...
        print payload.get_payload()
else:
    print b.get_payload()
