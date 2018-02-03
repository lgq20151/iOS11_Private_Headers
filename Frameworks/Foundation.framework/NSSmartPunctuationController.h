/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSmartPunctuationController : NSObject {
    <NSSmartPunctuationClient> * _client;
    NSSmartQuoteOptions * _options;
    unsigned long long  _types;
}

@property <NSSmartPunctuationClient> *client;
@property bool smartDashesEnabled;
@property (copy) NSSmartQuoteOptions *smartQuoteOptions;
@property bool smartQuotesEnabled;

- (id)client;
- (void)clientDidReplaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)setClient:(id)arg1;
- (void)setSmartDashesEnabled:(bool)arg1;
- (void)setSmartQuoteOptions:(id)arg1;
- (void)setSmartQuotesEnabled:(bool)arg1;
- (bool)smartDashesEnabled;
- (id)smartQuoteOptions;
- (bool)smartQuotesEnabled;

@end
