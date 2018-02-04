/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAttachment : NSObject {
    NSDate * _createdDate;
    NSString * _guid;
    bool  _isSticker;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)createdDate;
- (id)description;
- (id)fileTransfer;
- (id)guid;
- (id)initWithPath:(id)arg1 guid:(id)arg2;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(bool)arg4;
- (bool)isSticker;
- (id)path;

@end