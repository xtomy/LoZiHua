//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *	@brief	工作信息
 */
@interface SSFacebookWork : NSObject <NSCoding>
{
@private
    NSMutableDictionary *_sourceData;
}

/**
 *	@brief	源数据
 */
@property (nonatomic,retain) NSDictionary *sourceData;

/**
 *	@brief	公司名称
 */
@property (nonatomic,readonly) NSString *employer;

/**
 *	@brief	公司所在地
 */
@property (nonatomic,readonly) NSString *location;

/**
 *	@brief	职务
 */
@property (nonatomic,readonly) NSString *position;

/**
 *	@brief	开始时间
 */
@property (nonatomic,readonly) NSString *startDate;

/**
 *	@brief	结束时间
 */
@property (nonatomic,readonly) NSString *endDate;

/**
 *	@brief	创建职业信息
 *
 *	@param 	response 	回复数据
 *
 *	@return	职业信息
 */
+ (SSFacebookWork *)workWithResponse:(NSDictionary *)response;

@end
