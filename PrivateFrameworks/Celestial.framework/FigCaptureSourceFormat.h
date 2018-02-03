/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {
    struct opaqueCMFormatDescription { } * _formatDescription;
    NSDictionary * _formatDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultActiveFormat, readonly) bool defaultActiveFormat;
@property (readonly, copy) NSString *description;
@property (getter=isExperimental, readonly) bool experimental;
@property (readonly) unsigned int format;
@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int mediaType;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)format;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (unsigned int)mediaType;

@end
