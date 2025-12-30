#ifndef __DEV_SEEKIT_LIBABC_EXAMPLE_OOP_H
#define __DEV_SEEKIT_LIBABC_EXAMPLE_OOP_H

#include "stdint.h"

/**
 * @desc 一个示例类 Example_t
 *
 * @field id: 示例的 id
 *				info: 示例的描述信息
 */
typedef struct {
    uint8_t id;
    const char* info;
} Example_t;

/**
 * @desc 初始化一个 Example_t 的实例
 * @param ex: example 实例
 *				info: 示例的描述信息
 * @return 示例类的实例数量
 */
extern int example_init(Example_t* ex, const char* info);

/**
 * @desc 获取 Example_t 的 id
 *
 * @param ex: example 实例
 * @return Example_t 实例的 id
 */
extern int example_get_id(const Example_t* ex);

/**
 * @desc 获取 Example_t 的描述
 *
 * @param ex: example 实例
 * @return Example_t 实例的描述
 */
extern const char* example_get_info(const Example_t* ex);

/**
 * @desc 通过用户定义的 stdout 如串口输出表达 Example_t 的字符串
 *
 * @param ex: example 实例
 */
extern void example_print(const Example_t* ex);

#endif
