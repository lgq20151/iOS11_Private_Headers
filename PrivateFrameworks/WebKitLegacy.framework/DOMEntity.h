/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMEntity : DOMNode

@property (readonly, copy) NSString *notationName;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;

- (id)notationName;
- (id)publicId;
- (id)systemId;

@end
