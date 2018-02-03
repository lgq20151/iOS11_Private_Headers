/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (readonly, copy) NSString *text;
@property (copy) NSString *type;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)absoluteLinkURL;
- (id)accessKey;
- (id)charset;
- (id)coords;
- (id)hashName;
- (id)host;
- (id)hostname;
- (id)href;
- (id)hreflang;
- (id)name;
- (id)origin;
- (id)pathname;
- (id)ping;
- (id)port;
- (id)protocol;
- (id)rel;
- (id)relList;
- (id)rev;
- (id)search;
- (void)setAccessKey:(id)arg1;
- (void)setCharset:(id)arg1;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setHreflang:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPing:(id)arg1;
- (void)setRel:(id)arg1;
- (void)setRev:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setType:(id)arg1;
- (id)shape;
- (id)target;
- (id)text;
- (id)type;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)alwaysAttemptToShowTapHighlight;

@end
