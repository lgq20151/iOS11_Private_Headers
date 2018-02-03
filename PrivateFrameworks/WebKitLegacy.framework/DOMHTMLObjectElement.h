/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *align;
@property (copy) NSString *archive;
@property (copy) NSString *border;
@property (copy) NSString *code;
@property (copy) NSString *codeBase;
@property (copy) NSString *codeType;
@property (readonly) DOMDocument *contentDocument;
@property (nonatomic, readonly) WebFrame *contentFrame;
@property (copy) NSString *data;
@property bool declare;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *height;
@property int hspace;
@property (copy) NSString *name;
@property (copy) NSString *standby;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property int vspace;
@property (copy) NSString *width;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)absoluteImageURL;
- (id)align;
- (id)archive;
- (id)border;
- (id)code;
- (id)codeBase;
- (id)codeType;
- (id)contentDocument;
- (id)contentFrame;
- (id)data;
- (bool)declare;
- (id)form;
- (id)height;
- (int)hspace;
- (id)name;
- (void)setAlign:(id)arg1;
- (void)setArchive:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setCodeBase:(id)arg1;
- (void)setCodeType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDeclare:(bool)arg1;
- (void)setHeight:(id)arg1;
- (void)setHspace:(int)arg1;
- (void)setName:(id)arg1;
- (void)setStandby:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUseMap:(id)arg1;
- (void)setVspace:(int)arg1;
- (void)setWidth:(id)arg1;
- (id)standby;
- (id)type;
- (id)useMap;
- (int)vspace;
- (id)width;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)showsTapHighlight;

@end
