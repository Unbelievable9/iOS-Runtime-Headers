/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURL, RUIParser;

@interface RUILoader : RUIHTTPRequest {
    BOOL _allowNonSecureHTTP;
    RUIParser *_parser;
    NSURL *_url;
}

@property BOOL allowNonSecureHTTP;

- (id)URL;
- (void)_finishLoad;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)allWebViewsFinishedLoading;
- (BOOL)allowNonSecureHTTP;
- (BOOL)anyWebViewLoading;
- (void)cancel;
- (void)dealloc;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)parseData:(id)arg1;
- (void)setAllowNonSecureHTTP:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)webViewFinishedLoading;

@end
