/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface _RKResponse : NSObject {
    NSString * _headword;
    NSString * _speechAct;
    NSString * _text;
}

@property (readonly) NSString *headword;
@property (readonly) NSString *speechAct;
@property (readonly) NSString *text;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)headword;
- (id)init;
- (id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)speechAct;
- (id)text;
- (unsigned long long)type;

@end