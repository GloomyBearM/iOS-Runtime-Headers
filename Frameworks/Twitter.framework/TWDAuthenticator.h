/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class ACAccountStore;

@interface TWDAuthenticator : ACAccountAuthenticator <XPCProxyTarget> {
    struct _xpc_connection_s { } *_connection;
    ACAccountStore *_accountStore;
}


- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)dealloc;
- (id)initWithConnection:(struct _xpc_connection_s { }*)arg1;
- (id)verifyCredentialsURL;
- (void)authenticateAndSaveAccount:(id)arg1 withHandler:(id)arg2;
- (void)swapCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)authenticateAccount:(id)arg1 withHandler:(id)arg2;
- (BOOL)_duplicateAccountExists:(id)arg1;
- (id)_responseParametersWithData:(id)arg1;
- (id)accessTokenURL;
- (id)consumerSecret;
- (id)consumerKey;

@end