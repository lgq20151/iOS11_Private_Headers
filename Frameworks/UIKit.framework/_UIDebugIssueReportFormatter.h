/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDebugIssueReportFormatter : _UIDebugReportFormatter {
    NSString * _defaultIssuePrefix;
    NSString * _footer;
    NSString * _header;
    NSString * _noIssuesDescription;
}

@property (nonatomic, copy) NSString *defaultIssuePrefix;
@property (nonatomic, copy) NSString *footer;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSString *noIssuesDescription;

- (void).cxx_destruct;
- (id)_componentsFromReport:(id)arg1;
- (id)defaultIssuePrefix;
- (id)footer;
- (id)header;
- (id)init;
- (id)noIssuesDescription;
- (void)setDefaultIssuePrefix:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setNoIssuesDescription:(id)arg1;
- (id)stringFromReport:(id)arg1;

@end
